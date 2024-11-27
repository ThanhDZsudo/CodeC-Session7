#include <stdio.h>

int main() {
    int a[5];
    printf("Nhap vao mang la: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++) {
        a[i] += (a[i] % 2 == 0) ? 3 : 2;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }
}

