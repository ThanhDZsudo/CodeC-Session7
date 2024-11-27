#include <stdio.h>

int main() {
    int a[6] = {9,34, 18, 4, 21, 5};
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("Phan tu lon nhat trong mang: %d\n", max);
    printf("Phan tu nho nhat trong mang: %d\n", min);
}

