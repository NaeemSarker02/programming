#include <iostream>

using namespace std;

int binarySearch(int array[], int size, int value) {
  int low = 0;
  int high = size - 1;
  int mid;

  while (low <= high) {
    mid = (low + high) / 2;

    if (array[mid] == value) {
      return mid;
    } else if (array[mid] < value) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  int array[] = {10, 20, 30, 40, 50};
  int size = sizeof(array) / sizeof(array[0]);
  int value;

  // Get the value to be searched from the user.
  cout << "Enter the value to be searched: ";
  cin >> value;

  // Find the index of the value in the array using binary search.
  int index = binarySearch(array, size, value);

  if (index == -1) {
    cout << "The value " << value << " was not found in the array." << endl;
  } else {
    cout << "The value " << value << " was found at index " << index << " in the array." << endl;
  }

  return 0;
}
