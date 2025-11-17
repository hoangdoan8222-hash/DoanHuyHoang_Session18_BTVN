#include <stdio.h>

// Hàm in các ph?n t? c?a m?ng b?ng con tr?
void printArray(int *arr, int size) {
    int i; // Khai báo bi?n d?m tru?c vòng l?p
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);

    printf("Cac phan tu trong mang: ");
    printArray(a, size);

    return 0;
}


