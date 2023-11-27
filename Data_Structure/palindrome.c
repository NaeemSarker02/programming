#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int n, i, j;

  printf("Enter a string: ");
  gets(str);

  n = strlen(str);

  for (i = 0, j = n - 1; i < n / 2; i++, j--) {
    if (str[i] != str[j]) {
      printf("%s is not a palindrome\n", str);
      return 0;
    }
  }

  printf("%s is a palindrome\n", str);
  return 0;
}
