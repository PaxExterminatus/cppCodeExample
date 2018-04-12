#include "stdafx.h"
#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <ctime>
using namespace std;

void model (int a, int b, int* sum, int* proiz) {
  cout <<"2 ======================="<< endl;
  cout <<"&sum "<< sum << endl;
  cout <<"&proizv "<< proiz << endl;
  cout <<"3 ======================="<< endl;
  cout <<"&a "<< &a << endl;
  cout <<"&b "<< &b << endl;
  cout <<"3 ======================="<< endl;
 *sum = a+b;
 *proiz = a*b;
}

void view (int* sum, int* proizv) {
  cout << "The sum is " << *sum << endl;
  cout << "The proizv is " << *proizv << endl;
}

void main() {
  int sum = 10;
  int proizv = 20;
  cout <<"1 ======================="<< endl;
  cout <<"&sum "<< &sum << endl;
  cout <<"&proizv "<< &proizv << endl;
 
  model(sum, proizv, &sum, &proizv);

  view(&sum, &proizv);
  system("pause");
}
