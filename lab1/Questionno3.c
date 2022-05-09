/* Question No.3
Write a program that takes a real number and produces is ceiling and floor 
integers as output.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float number;
    printf("Enter a real number: ");
    scanf("%f", &number);
    printf("Ceil Value of %f is: %.2lf\n", number, ceil(number));
    printf("Floor value of %f is: %.2lf\n", number, floor(number));
    return 0;
}
