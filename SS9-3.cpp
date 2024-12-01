#include<stdio.h>
int main() {
    int numbers[100];
    int n, i, position;
    
    do {
        printf("Moi nhap so phan tu muon nhap: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    for (i = 0; i < n; i++) {
        printf("Moi nhap phan tu thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Mang ban dau: ");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    do {
        printf("\nMoi nhap vi tri can xoa: ", n);
        scanf("%d", &position);
    } while (position < 1 || position > n);

    for (i = position - 1; i < n - 1; i++) {
        numbers[i] = numbers[i + 1];
    }
    n--;

    printf("Mang sau khi xoa: ");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

