#include <stdio.h>
#include <math.h>

int main() {
    double a, b, hypotenuse;

    // Get the lengths of the two sides from user
    printf("Enter the length of side a: ");
    scanf("%lf", &a);
    
    printf("Enter the length of side b: ");
    scanf("%lf", &b);

    // Calculate the hypotenuse using the Pythagorean theorem
    hypotenuse = sqrt(a * a + b * b);

    // Display the result
    printf("The hypotenuse is: %.2lf\n", hypotenuse);

    return 0;
}
