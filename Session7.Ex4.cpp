#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

