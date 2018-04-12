#include "stdafx.h"
#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <ctime>
using namespace std;

void main() {
 int i = 0;
 while (i < 5) {
  unsigned int iteration_time = clock();
  i++;
  Sleep(1000);
  cout << "iteration: " << i << endl;
  cout << "iteration time: " << (clock() - iteration_time) / 1000.0<< endl;
 }
 cout << "runtime = " << clock()/1000.0 << endl;
 system("pause");
}
