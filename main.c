#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Enter an integer, x: ");
    scanf("%d", &x);
    y=(x+2)+(x-3);
    printf("(x+2)+(x-3) is : %d\n", y);
    return 0;
}
