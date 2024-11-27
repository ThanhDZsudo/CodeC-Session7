#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int chieu_dai = sizeof(a) / sizeof(a[0]);
    int i, j = 0;
    for (i = 0; i < chieu_dai; i++) {
        printf("%d ", *(a + (i + chieu_dai) % chieu_dai) - j);
        j = (j + 1) % chieu_dai;
    }
    printf("\nDo dai cua mang: %d\n", chieu_dai);
}

