/*Question no.4
Test the validity of the following argument using truth table.
Premise: If I go to the mall, I will buy new jeans
Premise: If I buy new jeans, I will buy a shirt to go with it.
Conclusion: If I go to the mall, I will buy a shirt.
*/
#include <stdio.h>
char getTorF(int val) {
    if(val) {
        return 'T';
    }
    return 'F';
}
int getImplies(int a, int b) {
    if(a && !b) {
        return 0;
    } else {
        return 1;
    }
}
int main() {
    int p = 0, q = 0, r = 0, i, flag = 0;
    int s, t, u;
    printf("p\tq\tr\tp->q\tq->r\tp->r\n");
    printf("----------------------------------------------\n");
    for (i = 0; i < 8; i++) {
        printf("%c\t", getTorF(p));
        printf("%c\t", getTorF(q));
        printf("%c\t", getTorF(r));
        s = getImplies(p, q);
        t = getImplies(q, r);
        u = getImplies(p, r);
        printf("%c\t", getTorF(s));
        printf("%c\t", getTorF(t));
        printf("%c\n", getTorF(u));
        if( ( s && t ) && u ) {
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
