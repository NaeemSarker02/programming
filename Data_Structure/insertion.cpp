#include <iostream>

using namespace std;

int main() {
  int array[] = {10, 20, 30, 40, 50};
  int size = sizeof(array) / sizeof(array[0]);
  int value;
  int index;

  // Get the value to be inserted from the user.
  cout << "Enter the value to be inserted: ";
  cin >> value;

  // Get the index where the value should be inserted from the user.
  cout << "Enter the index where the value should be inserted: ";
  cin >> index;

  // Shift the elements after the index to the right by one position.
  for (int i = size - 1; i >= index; i--) {
    array[i + 1] = array[i];
  }

  // Insert the value at the specified index.
  array[index] = value;
  size++;

  // Print the array to the console.
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}
