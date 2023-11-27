#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int array[] = {10, 20, 30, 40, 50};
  int size = sizeof(array) / sizeof(array[0]);
  int value;

  // Get the value to be deleted from the user.
  cout << "Enter the value to be deleted: ";
  cin >> value;

  // Use the `std::remove()` algorithm to find and remove the element from the array.
  int *new_array = std::remove(array, array + size, value);

  // Get the new size of the array.
  size = new_array - array;

  // Print the new array to the console.
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}
