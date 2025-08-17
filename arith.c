#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    int z = 0;

    printf("Enter the 2 numbers: ");
    scanf("%d %d", &x, &y);

    z = x / y;

    printf("Result = %d / %d = %d\n", x, y, z);
    return 0;

}