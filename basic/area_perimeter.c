#include <stdio.h>

int main() {
    int r;
    float area, perimeter;

    printf("Enter the radius: ");
    scanf("%d", &r);

    area = 3.14 * r * r;
    printf("Area of Circle: %f\n", area);

    perimeter = 2 * 3.14 * r;
    printf("Perimeter of Circle: %f\n", perimeter);

    return 0;
}
