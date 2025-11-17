#include <stdio.h>

#define SIZE 6  
void deleteElement(int arr[], int *size, int pos) {
    int i;

    if (pos < 0 || pos >= *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--; 
}

int main() {
    int a[SIZE] = {10, 20, 30, 40, 50, 60};
    int size = SIZE;
    int i;

    printf("Mang ban dau: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    deleteElement(a, &size, 2);

    printf("Mang sau khi xoa: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

