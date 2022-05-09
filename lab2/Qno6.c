/*Question no.6
Write a program to find and implement the Chinese Remainder Theorem.
*/
#include<stdio.h>
int gcdExtended(int a, int b, int* x, int* y)
{
	if (a == 0) {
		*x = 0;
		*y = 1;
		return b;
	}
	int x1, y1; 
	int gcd = gcdExtended(b % a, a, &x1, &y1);
	*x = y1 - (b / a) * x1;
	*y = x1;
	return gcd;
}
int main(){
    int m1, m2;
    int a1, a2;
    int y1 = 0, y2 = 0;
    printf(" a1 and a2 : ");
    scanf("%d %d", &a1, &a2);
    printf(" m1 and m2: ");
    scanf("%d %d", &m1, &m2);
    int M = m1 * m2;
    int M1 = M / m1;
    int M2 = M / m2;
    int gcd = gcdExtended(M1, M2, &y1, &y2);
    int result;
    result = (a1 * M1 * y1 + a2 * M2 * y2) % M;
    printf("\n solution of modulo %d is %d", M,result  );
    
}
