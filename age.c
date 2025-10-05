#include<stdio.h>
int main (){
    int age;

printf("Entre the age :");
    scanf("%d", &age);

age >= 18 ? printf("adult \n") : printf("not a adult \n");
age < 18 ? printf("child") : printf("not a child");
    return 0;
}