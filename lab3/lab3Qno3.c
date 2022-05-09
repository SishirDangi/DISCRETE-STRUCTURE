/*Question no.3
Test the validity of the following argument using truth table.
I will buy a new goat or a used Yugo.
If I buy both a new goat and a used Yugo, I will need a loan.
I bought a used Yugo and I don't need a loan.
Therefore, I didn't buy a new goat.
*/

#include <stdio.h>
char getTorF(int val) {
    if(val) {
        return 'T';
    }
    return 'F';
}
int getImpliesResult(int a, int r) {
    if(a && !r) { 
        return 0;
    } else {
        return 1;
    }
}
int main() {
    int p, q, r, i, flag = 0;
    int s, t, u;
    p=q=r=0;
    printf("p\t q\t r\t p v q\t p^q->r\t q ^ ~r\t ~p\n");
    printf("-----------------------------------------------------\n");
    for (i = 0; i < 8; i++) {
        printf("%c \t", getTorF(p));
        printf("%c \t", getTorF(q));
        printf("%c \t", getTorF(r));
        s = p || q;
        t = getImpliesResult(p&&q, r);
        u = q && !r;
        printf("%c \t", getTorF(s));
        printf("%c \t", getTorF(t));
        printf("%c \t", getTorF(u));
        printf("%c \n", getTorF(!p));
        if( (s && t && u) && !p) {
            flag = 1;
        }
        (i+1)%4== 0 ? p = !p : 0;
        (i+1)%2 == 0 ? q = !q : 0;
        r = !r;
    }
    if(flag) {
        printf("\nStatement Verified!!");
    } else {
        printf("\nStatement not Verified!!");
    }
    return 0;
}
