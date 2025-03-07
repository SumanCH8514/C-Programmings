#include <stdio.h>

int main() {
    char f_name[25], l_name[25];

    printf("Enter your First name: ");
    scanf("%[^\n]*c", f_name);
    scanf("%[^\n]*c", l_name);

    printf("Your name is: %s", f_name, l_name);

    return 0;
}
