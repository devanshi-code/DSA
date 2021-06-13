#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
  int result=-1;	
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      result=mid;
      end=mid-1;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return result;
}

int main(void) {
  int array[] = {2, 4, 10, 10, 10, 18, 20};
  int x = 4;
  int n = sizeof(array) / sizeof(array[0]);
  int index = binarySearch(array, x, 0, n - 1);
  if (index == -1)
    cout<<"Not found";
  else
    cout<<"Element found at index: " <<index;}
}