#include <string.h>
#include <iostream>
#include "BubbleSort/Bubble.h"
#include "SelectionSort/Selection.h"
#include "InsertionSort/Insertion.h"
#include "ShellSort/Shell.h"
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

void Insertion(const int* arr, const int count)
{
  int src[count];
  memcpy(src, arr, sizeof(int)* count);
  cout << "Befor: " << endl;
  Print(src,count);

  cout << "InsertionSorting.. " << endl;
  Insertion_Sort(src, count);
  cout << "After: " << endl;
  Print(src,count);
}

void Insertion_1(const int* arr, const int count)
{
  int src[count];
  memcpy(src, arr, sizeof(int)* count);
  cout << "Befor: " << endl;
  Print(src,count);

  cout << "Insertion_1Sorting.. " << endl;
  Insertion_Sort_1(src+1, count-2);
  cout << "After: " << endl;
  Print(src,count);
}

void Shell_1(const int* arr, const int count)
{
  int src[count];
  memcpy(src, arr, sizeof(int)* count);
  cout << "Befor: " << endl;
  Print(src,count);

  cout << "Shell_1Sorting.. " << endl;
  Shell_Sort_1(src+1, count-2);
  cout << "After: " << endl;
  Print(src,count);
}

int main()
{
  //int src[11]={20,5,9,3,1,2,8,4,7,6,30};
  int src[11]={20,9,8,7,6,5,4,3,2,1,30};
  //int src[9]={1,2,3,4,5,6,7,8,9};
  int count = sizeof(src)/sizeof(int);
  cout << "The num of Array is: " << count << endl;
  
  /*要求排序结果是从小到大*/
//  Bubble(src, count);
  cout << "========================" << endl;
//  Selection(src, count);
  cout << "========================" << endl;
  Insertion_1(src, count);
//  cout << "========================" << endl;
//  Insertion(src, count);
  cout << "========================" << endl;
  Shell_1(src, count);
  return 0;
}
