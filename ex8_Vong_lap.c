#include <stdio.h>

int main() {
    int m, n;

    printf("Chieu dai hinh chu nhat: ");
    scanf("%d", &m);

    printf("Chieu rong hinh chu nhat: ");
    scanf("%d", &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
