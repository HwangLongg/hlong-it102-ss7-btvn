#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    
    printf("Nhap so thu ba: ");
    scanf("%d", &c);
    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("Cac so theo thu tu tang dan la: %d, %d, %d\n", a, b, c);

    return 0;
}
