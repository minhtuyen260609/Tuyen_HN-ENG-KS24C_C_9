#include <stdio.h>
int main() {
    int arr[100], n = 0, choice, i, position, value;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
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
        else if (choice == 4) {
            if (n == 0) {
                printf("Mang rong\n");
            } else {
                printf("Nhap vi tri muon sua: ");
                scanf("%d", &position);
                if (position < 1 || position > n) {
                    printf("Vi tri khong hop le\n");
                } else {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &value);
                    arr[position - 1] = value;
                }
            }
        } 
        else if (choice == 5) {
            if (n == 0) {
                printf("Mang rong\n");
            } else {
                printf("Nhap vi tri muon xoa: ");
                scanf("%d", &position);
                if (position < 1 || position > n) {
                    printf("Vi tri khong hop le\n");
                } else {
                    for (i = position - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                }
            }
        } 
        else if (choice == 6) {
            printf("Thoat chuong trinh\n");
        } 
        else {
            printf("Lua chon khong hop le\n");
        }
    } while (choice != 6);
    return 0;
}

