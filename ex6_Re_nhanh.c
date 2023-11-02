#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap so nguyen a: ");
    scanf("%d", &a);

    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    printf("Nhap so nguyen c: ");
    scanf("%d", &c);

    int min, mid, max;

    // Tìm so nho nhat, so trung gian va so lon nhat 
    if (a <= b && a <= c) {
        min = a;
        if (b <= c) {
            mid = b;
            max = c;
        } else {
            mid = c;
            max = b;
        }
    } else if (b <= a && b <= c) {
        min = b;
        if (a <= c) {
            mid = a;
            max = c;
        } else {
            mid = c;
            max = a;
        }
    } else {
        min = c;
        if (a <= b) {
            mid = a;
            max = b;
        } else {
            mid = b;
            max = a;
        }
    }

    printf("Các so theo thu tu tang dan: %d, %d, %d\n", min, mid, max);

    return 0;
}
