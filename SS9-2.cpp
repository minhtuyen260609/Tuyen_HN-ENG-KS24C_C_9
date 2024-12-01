#include<stdio.h>
int main() {
    int numbers[100];
    int n, i, position, value;
    
    do {
        printf("Moi nhap so phan tu cua mang: ");
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
        printf("\nMoi nhap vi tri can sua: ", n);
        scanf("%d", &position);
    } while (position < 1 || position > n);

    printf("Moi nhap gia tri moi: ");
    scanf("%d", &value);

    numbers[position - 1] = value;

    printf("Mang sau khi sua: ");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

