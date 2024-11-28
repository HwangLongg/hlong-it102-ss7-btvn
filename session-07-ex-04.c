#include <stdio.h>

int main() {
    int n;

   
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

  
    int mang[n];

    
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("\nMảng bạn vừa nhập là:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }

    return 0;
}
