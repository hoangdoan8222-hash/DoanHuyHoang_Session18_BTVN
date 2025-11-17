#include <stdio.h>

#define SIZE 6 // kích thu?c m?ng

// Hàm tìm ki?m ph?n t? trong m?ng
int search(int arr[], int key) {
    int i; // khai báo bi?n dùng cho vòng l?p
    for (i = 0; i < SIZE; i++) {
        if (arr[i] == key) {
            return i; // Tr? v? v? trí tìm du?c
        }
    }
    return -1; // Không tìm th?y
}

int main() {
    int a[SIZE] = {1, 2, 4, 5, 6, 7};
    int key = 7;

    int result = search(a, key);

    if (result != -1)
        printf("%d\n", result);
    else
        printf("Khong tim thay phan tu!\n");

    return 0;
}

