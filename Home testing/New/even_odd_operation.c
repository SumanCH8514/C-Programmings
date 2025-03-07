#include <stdio.h>

int result();

int main() {
  int i;
  i = result();

  if (i % 2 == 0) {
    printf("Even Number.\n");
  } else {
    printf("Odd Number.\n");
  }

  return 0;
}

int result() {
  int n;
  printf("Enter The Number: ");
  scanf("%d", &n);
  return n;
}

