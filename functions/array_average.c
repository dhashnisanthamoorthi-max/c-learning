#include <stdio.h>

int main() {
    int n;
    int a[100];
    float avg, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = sum / n;

    printf("Average = %.2f\n", avg);
    return 0;
}
