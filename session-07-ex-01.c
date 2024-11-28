#include <stdio.h>

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int doDai = sizeof(mang) / sizeof(mang[0]);

    for (int i = 0; i < doDai; i++) 
        printf("%d\n", mang[i]);
    
    printf("Độ dài mảng: %d\n", doDai);

    return 0;
}
