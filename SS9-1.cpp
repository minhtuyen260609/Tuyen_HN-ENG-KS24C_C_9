#include<stdio.h>
int main() {
    int numbers[100];
    int n, i, position, value;

    do {
        printf("Moi nhap so tu muon nhap: ");
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
        printf("\nMoi nhap vi tri can them (1 -> %d): ", n + 1);
        scanf("%d", &position);
    } while (position < 1 || position > n + 1);

    printf("Moi nhap gia tri can them: ");
    scanf("%d", &value);

    for (i = n; i >= position; i--) {
        numbers[i] = numbers[i - 1];
    }
    numbers[position - 1] = value;
    n++;

    printf("Mang sau khi them: ");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

