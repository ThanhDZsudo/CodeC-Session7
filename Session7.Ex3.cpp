#include <stdio.h>

int main() {
    int a[5] = {1, 12, 66, 26, 9};
    int b = 0;
    for (int i = 0; i < 5; i++){
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            b = 1;
        }
    }if (!b){
        printf("Mang nay khong co so chan");
    }
    printf("\n");
}

