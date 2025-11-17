#include <stdio.h>

#define MAX 100  

void insertElement(int *arr, int *size, int value, int pos) {
    int i;
    if (pos < 0 || pos > *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (i = *size; i > pos; i--) {
        *(arr + i) = *(arr + i - 1); 
    }
    *(arr + pos) = value; 
    (*size)++;
}

void deleteElement(int *arr, int *size, int pos) {
    int i;
    if (pos < 0 || pos >= *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (i = pos; i < *size - 1; i++) {
        *(arr + i) = *(arr + i + 1); 
    }
    (*size)--;
}

void updateElement(int *arr, int size, int pos, int value) {
    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    *(arr + pos) = value;
}

void displayArray(int *arr, int size) {
    int i;
    if (size == 0) {
        printf("Mang rong!\n");
        return;
    }
    printf("Cac phan tu trong mang: ");
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[MAX];
    int size = 0;  
    int choice, value, pos;

    do {
        printf("\n——————————————— Quan ly danh sach so nguyen ———————————————\n");
        printf("1. Them phan tu vao vi tri bat ky\n");
        printf("2. Xoa phan tu o vi tri bat ky\n");
        printf("3. Cap nhat gia tri tai vi tri bat ky\n");
        printf("4. Hien thi mang\n");
        printf("5. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                printf("Nhap vi tri can them: ");
                scanf("%d", &pos);
                insertElement(arr, &size, value, pos);
                break;
            case 2:
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &pos);
                deleteElement(arr, &size, pos);
                break;
            case 3:
                printf("Nhap vi tri can cap nhat: ");
                scanf("%d", &pos);
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                updateElement(arr, size, pos, value);
                break;
            case 4:
                displayArray(arr, size);
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(choice != 5);

    return 0;
}

