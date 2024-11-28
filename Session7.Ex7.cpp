#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    int i = 0;
    while (i < n) {
        printf("Nhap phan tu thu %d : ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0) {
            i++;
        } else {
            printf("Phan tu phai la so le. Vui long nhap lai nhe\n");
        }
    }
    printf("Mang chua cac phan tu le la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

