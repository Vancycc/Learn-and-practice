#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    float d = (b / 100) / 12;
    float a1 = (a - c) * (1 + d);
    float a2 = (a1 - c) * (1 + d);
    float a3 = (a2 - c) * (1 + d);
    scanf("%0.2f,%0.2f,%0.2f", &a, &b, &c);
    printf(" Balance remaining after first payment: $%0.2f\nBalance remaining after second payment: $%0.2f\nBalance remaining after third payment: $%0.2f", a1, a2, a3);
    return 0;
}

