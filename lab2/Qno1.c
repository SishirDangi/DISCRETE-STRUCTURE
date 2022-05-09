/*Question no.1
Write a program to implement Euclidean and Extended Euclidean algorithms*/
#include <stdio.h>

int Euclidean(int a, int b) {
    if(a == 0) {
        return b;
    }
    return Euclidean(b%a, a);
}

int ExtendedEuclidean(int a, int b, int *x, int *y) {
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
    int x1, y1; 
    int gcd = ExtendedEuclidean(b%a, a, &x1, &y1);
 
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;

}

int main() {
    int a, b, x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Implementing Euclidean Algorithm: \n");
    printf("%d", Euclidean(a, b));

    printf("\nImplementing Extendted Euclidean Algorithm: \n");
    printf("%d", ExtendedEuclidean(a, b, &x, &y));

}
