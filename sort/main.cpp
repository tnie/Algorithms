#include <string.h>
#include <iostream>
#include "BubbleSort/Bubble.h"
#include "SelectionSort/Selection.h"
#include "Common/Common.h"

using namespace std;

void Bubble(const int* arr, const int count)
{
  int src[count];
  memcpy(src, arr, sizeof(int) * count);
  cout << "Befor: " << endl;
  Print(src,count);

  cout << "BubbleSorting.. " << endl;
  Bubble_Sort_1(src, count);
  cout << "After: " << endl;
  Print(src,count);
}

void Selection(const int* arr, const int count)
{
  int src[count];
  memcpy(src, arr, sizeof(int)* count);
  cout << "Befor: " << endl;
  Print(src,count);

  cout << "SelectionSorting.. " << endl;
  Selection_Sort_1(src, count);
  cout << "After: " << endl;
  Print(src,count);
}

int main()
{
  int src[9]={5,9,3,1,2,8,4,7,6};
  int count = sizeof(src)/sizeof(int);
  cout << "The num of Array is: " << count << endl;
  
  /*要求排序结果是从小到大*/
  Bubble(src, count);
  cout << "========================" << endl;
  Selection(src, count);
  return 0;
}
