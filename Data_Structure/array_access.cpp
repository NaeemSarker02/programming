#include <stdio.h>

#define SIZE 10

int main() {
    int array[SIZE];
    int i, num, position;

    // Input array elements from the user
    printf("Enter %d elements in the array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }

    // Input the number to insert
    printf("Enter the number to insert: ");
    scanf("%d\n", &num);

    // Input the position to insert the number
    printf("Enter the position to insert: ");
    scanf("%d\n", &position);

    // Shift elements to the right to make space for the new number
    for (i = SIZE - 1; i >= position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the number at the desired position
    array[position - 1] = num;

    // Print the updated array
    printf("Array after inserting %d at position %d:\n", num, position);
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
