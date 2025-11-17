#include <stdio.h>


void sum(int *x, int *y, int *result) {
    *result = *x + *y;  
}

int main() {
    int a = 7;
    int b = 3;
    int ketQua;

    sum(&a, &b, &ketQua);

    printf("Tong cua %d va %d la: %d\n", a, b, ketQua);

    return 0;
}

