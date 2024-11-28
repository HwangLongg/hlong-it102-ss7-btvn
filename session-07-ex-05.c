#include <stdio.h>

int main() {
    int mang[5] = {12, 5, 18, 9, 7};
    int max = mang[0];
    int min = mang[0];

    for (int i = 1; i < 5; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
        if (mang[i] < min) {
            min = mang[i];
        }
    }

    printf("Phần tử lớn nhất trong mảng: %d\n", max);
    printf("Phần tử nhỏ nhất trong mảng: %d\n", min);

    return 0;
}
