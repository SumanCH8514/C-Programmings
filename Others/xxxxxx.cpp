#include <stdio.h>
int main() {
  int i, n;
  int a = 0, b = 1;
  int sum = a + b;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", a, b);
  for (i = 3; i <= n; i++) {
    printf("%d, ", sum);
    a = b;
    b = sum;
    sum = a + b;
  }
  return 0;
}

                 // Suman-Chakrabortty.web.app
                // dev-suman-ch.blogspot.com
