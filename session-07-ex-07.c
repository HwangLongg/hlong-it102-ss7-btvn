#include <stdio.h>

int main() {
    int n;

    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    int mang[n];

    for (int i = 0; i < n; i++) {
        int phanTu;
        printf("Nhập phần tử %d: ", i);
        
        while (1) {
            scanf("%d", &phanTu);
            if (phanTu % 2 != 0) {
                mang[i] = phanTu;
                break;
            } else {
                printf("Số bạn nhập không phải là số lẻ. Vui lòng nhập lại phần tử %d: ", i);
            }
        }
    }

    printf("\nMảng bạn đã nhập là:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }

    return 0;
}
