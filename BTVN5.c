#include <stdio.h>

#define SIZE 5   

void updateValue(int arr[], int newValue, int pos) {

    if (pos >= 0 && pos < SIZE) {
        arr[pos] = newValue;
    } else {
        printf("Vi tri khong hop le: %d (phai tu 0 den %d)\n", pos, SIZE-1);
    }
}

int main() {
    int a[SIZE] = {10, 20, 30, 40, 50};
    int i; 

    printf("Mang ban dau: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    updateValue(a, 99, 2);

    printf("Mang sau khi cap nhat: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

