include<stdio.h>
#include<conio.h>

int main(){

    int age;
    pr#intf("Enter age:");
    scanf("%d", &age);

    if(age >=18)
        printf("Eligible to vote");
    else
        printf("Not eligible");

    return 0;
}
