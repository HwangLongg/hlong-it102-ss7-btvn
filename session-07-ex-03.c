#include <stdio.h>

int main() {
    int mang[5] = {10, 15, 20, 25, 30};  

    int soChan = 0;  

   
    printf("Các số chẵn trong mảng: ");
    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {  
            printf("%d ", mang[i]);
            soChan = 1; 
        }
    }

    if (!soChan) {
        printf("\nMảng không chứa số chẵn.");
    }

    return 0;
}

 