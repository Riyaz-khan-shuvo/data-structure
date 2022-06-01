#include <stdio.h>

struct Student
{
    int id;
    float result;
    char name[16];
};

int main()
{
    struct Student s;

    printf("Enter Your ID : ");
    scanf("%d", &s.id);
    printf("Enter Your CPGA : ");
    scanf("%f", &s.result);
    printf("Enter Your Name : ");
    scanf("%s", s.name);

    printf("***********\n\n\n");

    printf("Your Name is    : %s \nYour Id is   : %d \nYour Result is   : %.2f", s.name, s.id, s.result);

    return 0;
}