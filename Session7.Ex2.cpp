#include <stdio.h>

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &a[i]);
    }for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

