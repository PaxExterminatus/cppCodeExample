void main()
{
  int z = 0;
  z = model(5,3);
  //cout << "int size = " << sizeof(int) << " byte"<< endl;
  int *poiter_z = &z;
  //view(*pZ, *pZ + 1);
  cout << "pointer = " << sizeof(poiter_z) << endl;
  cout << "value = " << *poiter_z << endl;
  system("pause");
}
