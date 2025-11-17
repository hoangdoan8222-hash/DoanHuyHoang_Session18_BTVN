#include <stdio.h>

#define SIZE 6   

void insertElement(int arr[], int *size, int value, int pos) {
    int i;

    if (pos < 0 || pos > *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value; 
    (*size)++;        
}

int main() {
    int a[SIZE + 10] = {10, 20, 30, 40, 50, 60}; 
    int size = SIZE;
    int i;

    printf("Mang ban dau: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

     insertElement(a, &size, 99, 3);

    printf("Mang sau khi them: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

