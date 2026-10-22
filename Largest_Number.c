#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check conditions to find the largest number
    if (a >= b && a >= c) {
        printf("%.2f is the largest number.\n", a);
    } 
    else if (b >= c) {
        printf("%.2f is the largest number.\n", b);
    } 
    else {
        printf("%.2f is the largest number.\n", c);
    }

    return 0;
}