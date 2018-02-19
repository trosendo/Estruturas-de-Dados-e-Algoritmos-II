#include <stdio.h>

int main(){
    int scan;

    printf("Input a number: ");
    scanf("%d", &scan);
    printf("Input: %d\n\n", scan);

    int d1, d2;
    printf("Sum: ");
    scanf("%d + %d =", &d1, &d2);
    printf("%d + %d = %d\n\n", d1, d2, d1+d2);

    float r1;
    printf("Real: ");
    scanf("%f", &r1);
    printf("Real: %f\n\n", r1);


    float x, y;
    printf("Coordinates: ");
    scanf(" (%f , %f )", &x, &y);
    printf("X = %.3f\n", x);
    printf("Y = %.3f\n\n", y);

    return 0;
}
