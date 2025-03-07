#include <stdio.h>

int main() {
  int x;
  printf("Enter the value:\n");
  scanf ("%d", &x);
  //printf("%d", x);
  
  if(x < 5) {
  printf("%d is less than 5.", x);
  } else if (x <= 5) {
  printf("%d is less than 10.", x);
  } else {
  printf("%d is Greater than 10.", x);
  }
  return 0;
  }
  
