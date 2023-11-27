#include <iostream>

using namespace std;

void deleteValue(int array[], int size, int value) {
  int i, j;

  for (i = 0; i < size; i++) {
    if (array[i] == value) {
      for (j = i; j < size - 1; j++) {
        array[j] = array[j + 1];
      }
      size--;
      break;
    }
  }

  if (i == size) {
    cout << "The value " << value << " does not exist in the array." << endl;
  }
}

int main() {
  int array[] = {10, 20, 30, 40, 50};
  int size = sizeof(array) / sizeof(array[0]);
  int value = 30;

  deleteValue(array, size, value);

  cout << "The array after deleting " << value << " is: ";
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}
