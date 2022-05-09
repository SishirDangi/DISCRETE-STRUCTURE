/*Question no 2
Write recursive code to generate Fibonacci series.
*/
#include <stdio.h>
int fibonacci(int a, int b) {
    if(a<100) {
        printf("%d\t", a);
        return fibonacci(a+b, a);
    } else {
        return a;
    }
}
int main() {
    printf("%d\t", fibonacci(0, 1));
    return 0;
}
