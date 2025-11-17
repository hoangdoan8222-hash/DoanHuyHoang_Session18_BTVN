#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char inputString[MAX];
    char reverseString[MAX];
    char *pInput, *pReverse;
    int len, i;

    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Xoá ký t? xu?ng dòng

    len = strlen(inputString);

    pInput = inputString;        // Con tr? tr? d?n d?u chu?i nh?p
    pReverse = reverseString;    // Con tr? tr? d?n d?u chu?i d?o

    // Ð?o chu?i b?ng con tr?
    for (i = 0; i < len; i++) {
        *(pReverse + i) = *(pInput + (len - 1 - i));
    }
    *(pReverse + len) = '\0'; // K?t thúc chu?i

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

