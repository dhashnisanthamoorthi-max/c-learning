#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);  // & is required for scanf
    
    printf("You are %d years old.\n", age);
    return 0;
}
