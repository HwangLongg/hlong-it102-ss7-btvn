#include <stdio.h>

int main() {
    int mang[5]; 

    
    printf("Nhập 5 phần tử cho mảng:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phần tử %d: ", i + 1);
        scanf("%d", &mang[i]); 
    }

 
    printf("\nMảng sau khi nhập:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }

    return 0;
}
