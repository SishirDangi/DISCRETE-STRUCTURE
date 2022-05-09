/*Question no.4
Write a program to find prime factors of a number.
*/
#include <stdio.h>
int main()
{
    int i, j, num, isPrime;
    printf("Enter any number to print prime factors: ");
    scanf("%d", &num);
    printf("All prime factors of %d are: \n", num);
    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }        
           if(isPrime==1)
            {
                printf("%d, ", i);
            }
        }
    }
    return 0;
}
