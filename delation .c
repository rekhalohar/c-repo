#include <stdio.h>

int main() {
    int a[100], size, i, num, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("You want to delete element at position: ");
    scanf("%d", &pos);

    if (pos <= 0 || pos > size) {
        printf("Invalid position.\n");
    } else {
        // Shifting elements to remove the element at the specified position
        for (i = pos - 1; i < size - 1; i++) {
            a[i] = a[i + 1];
        }
        size--;  // Reduce the size of the array
    }

    printf("Array after deletion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
