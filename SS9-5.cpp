#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, i, position, value, count, sum, max, min;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Nhap so luong phan tu: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++) {
                printf("Nhap phan tu thu %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
        } 
        else if (choice == 2) {
            if (n == 0) {
                printf("Mang rong\n");
            } else {
                printf("Cac phan tu trong mang: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
        } 
        else if (choice == 3) {
            sum = 0;
            printf("Cac phan tu chan: ");
            for (i = 0; i < n; i++) {
                if (arr[i] % 2 == 0) {
                    printf("%d ", arr[i]);
                    sum += arr[i];
                }
            }
            printf("\nTong cac phan tu chan: %d\n", sum);
        } 
        else if (choice == 4) {
            if (n == 0) {
                printf("Mang rong\n");
            } else {
                max = arr[0];
                min = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
            }
        } 
        else if (choice == 5) {
            sum = 0;
            printf("Cac phan tu la so nguyen to: ");
            for (i = 0; i < n; i++) {
                if (arr[i] < 2) {
                    continue; 
                }
                int isPrime = 1;
                for (int j = 2; j * j <= arr[i]; j++) { 
                    if (arr[i] % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime) {
                    printf("%d ", arr[i]);
                    sum += arr[i];
                }
            }
            printf("\nTong cac phan tu la so nguyen to: %d\n", sum);
        } 
        else if (choice == 6) {
            printf("Nhap vao mot so: ");
            scanf("%d", &value);
            count = 0;
            for (i = 0; i < n; i++) {
                if (arr[i] == value) {
                    count++;
                }
            }
            printf("So phan tu %d trong mang: %d\n", value, count);
        } 
        else if (choice == 7) {
            printf("Nhap vi tri muon them: ");
            scanf("%d", &position);
            if (position < 1 || position > n + 1) {
                printf("Vi tri khong hop le\n");
            } else {
                printf("Nhap gia tri muon them: ");
                scanf("%d", &value);
                for (i = n; i >= position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position - 1] = value;
                n++;
            }
        } 
        else if (choice == 8) {
            printf("Thoat chuong trinh\n");
        } 
        else {
            printf("Lua chon khong hop le\n");
        }
    } while (choice != 8);

    return 0;
}

