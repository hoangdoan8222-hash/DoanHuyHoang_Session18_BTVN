#include <stdio.h>

#define SIZE 6 // Kích thu?c m?ng

// Hàm s?p x?p m?ng tang d?n
void sortArray(int arr[]) {
    int i, j, temp;

    for (i = 0; i < SIZE - 1; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int a[SIZE] = {5, 1, 7, 3, 4, 2};
    int i;

    printf("Mang ban dau: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }

    sortArray(a); // G?i hàm s?p x?p

    printf("\nMang sau khi sap xep: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}

