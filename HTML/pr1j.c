#include <stdio.h>
int main()
{
    int a = 5, b = 6;
    char c = 71;
    b ^= a;
    printf("%d", b);
    printf("%d\n", a);
    a &= 4;
    printf("%d\n", a);
    printf("%c\n", c);

    float d = (float)a / b;
    printf("%f", d);
    return 0;
}
