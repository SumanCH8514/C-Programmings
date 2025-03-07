#include <stdio.h>

struct college {
    char college_n[50];
    int roll;
    char name[30];
    char dept[30];
    int mob;
    int dob;
};

int main() {
    struct college svu;

    printf("What's Your College Name:\n");
    scanf("%s", svu.college_n);

    printf("What's Your Name:\n");
    gets(svu.name);

    printf("What's Your Department:\n");
    scanf("%s", svu.dept);

    printf("What's Your Roll Number:\n");
    scanf("%d", &svu.roll);

    printf("What's Your Mobile Number:\n");
    scanf("%d", &svu.mob);

    printf("What's Your Date Of Birth (in YYYYMMDD format):\n");
    scanf("%d", &svu.dob);

    return 0;
}
