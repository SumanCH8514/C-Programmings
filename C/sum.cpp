#include <stdio.h>

 int main (){
  int i, s=0, n;
  printf("Enter the value of n\n");
  scanf("%d", &n);
  for (i=1; i<=n; i++)
      s=s+i;
    
  
  printf("The value of 'S'is: \n%d", s);

  return 0;
}
