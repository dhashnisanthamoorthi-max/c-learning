#include <stdio.h>

int main() {
    int arr[5];
    int key, found = 0;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }

    return 0;
}
