#include <stdio.h>
int main() {
    int arr[100][100], n, m, choice, i, j, sum, product, largestSum, currentRowSum, rowWithLargestSum;
    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap so dong: ");
            scanf("%d", &n);
            printf("Nhap so cot: ");
            scanf("%d", &m);
            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                    printf("Nhap phan tu [%d][%d]: ", i + 1, j + 1);
                    scanf("%d", &arr[i][j]);
                }
            }
        } 
        else if (choice == 2) {
            printf("Ma tran da nhap:\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                    printf("%d ", arr[i][j]);
                }
                printf("\n");
            }
        } 
        else if (choice == 3) {
            sum = 0;
            printf("Cac phan tu le: ");
            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                    if (arr[i][j] % 2 != 0) {
                        printf("%d ", arr[i][j]);
                        sum += arr[i][j];
                    }
                }
            }
            printf("\nTong cac phan tu le: %d\n", sum);
        } 
        else if (choice == 4) {
            product = 1;
            printf("Cac phan tu tren duong bien: ");
            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                    if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                        printf("%d ", arr[i][j]);
                        product *= arr[i][j];
                    }
                }
            }
            printf("\nTich cac phan tu tren duong bien: %d\n", product);
        } 
        else if (choice == 5) {
            printf("Cac phan tu tren duong cheo chinh: ");
            for (i = 0; i < n && i < m; i++) {
                printf("%d ", arr[i][i]);
            }
            printf("\n");
        } 
        else if (choice == 6) {
            printf("Cac phan tu tren duong cheo phu: ");
            for (i = 0; i < n && i < m; i++) {
                printf("%d ", arr[i][m - i - 1]);
            }
            printf("\n");
        } 
        else if (choice == 7) {
            largestSum = -1;
            rowWithLargestSum = -1;
            for (i = 0; i < n; i++) {
                currentRowSum = 0;
                for (j = 0; j < m; j++) {
                    currentRowSum += arr[i][j];
                }
                if (currentRowSum > largestSum) {
                    largestSum = currentRowSum;
                    rowWithLargestSum = i;
                }
            }
            printf("Dong co tong cac phan tu lon nhat la dong %d co tong = %d\n", rowWithLargestSum + 1, largestSum);
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

