#include <iostream>

#ifndef __COMMON_H__
#define __COMMON_H__

using std::cout;
using std::endl;
int Print(const int* src, const int count)
{
  for(int i=0; i<count; ++i)
    cout << src[i] << (i == count-1 ? "\n" : " ");
  return 0;
}

int Swap(int& left, int& right)
{
  int tmp = left;
  left = right;
  right = tmp;
}
#endif
