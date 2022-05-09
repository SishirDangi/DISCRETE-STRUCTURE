/*Question no 1
Write recursive code to calculate a^n.
*/
#include <stdio.h>
int calculateExponent(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base*calculateExponent(base, exp-1);
}
int main() {
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("%d", calculateExponent(base, exponent) );
    return 0;
}
