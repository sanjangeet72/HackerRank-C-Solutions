#include <stdio.h>

int main() {
    int m, n;
    float a, b;

    scanf("%d", &m);
    scanf("%d", &n);

    scanf("%f", &a);
    scanf("%f", &b);

    printf("%d %d\n%.1f %.1f", m+n, m-n, a+b, a-b);

    return 0;
}
