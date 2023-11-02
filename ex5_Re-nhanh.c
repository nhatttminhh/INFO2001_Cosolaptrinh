#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap so nguyen a: ");
    scanf("%d", &a);

    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    printf("Nhap so nguyen c: ");
    scanf("%d", &c);

    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    printf("Gia tri lon nhat la: %d\n", max);

    return 0;
}
