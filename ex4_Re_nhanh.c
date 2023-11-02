#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so nguyen a: ");
    scanf("%d", &a);

    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    if (a > b) {
        printf("Gia tri lon nhat la: %d\n", a);
    } else {
        printf("Gia tri lon nhat la: %d\n", b);
    }

    return 0;
}
