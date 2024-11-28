#include <stdio.h>

int main() {
    int mang[5] = {10, 15, 20, 25, 30};  

   
    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            mang[i] += 3;  
        } else {
            mang[i] += 2; 
        }
    }

    
    printf("Mảng sau khi thay đổi:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }

    return 0;
}
