/*Question no.1
*/
#include <stdio.h>
int getFirstExprRes(int p, int q, int r) {
    return (p && !q || r);
}
int getSecExprRes(int p, int r) {
    return (!p || r);
}
void alterValues(int *p, int *q, int *r, int i) {
    (i+1)%4 == 0 ? *p = !(*p) : 0;
    (i+1)%2 == 0 ? *q = !(*q) : 0;
    *r = !(*r);
}
char getTorF(int val) {
    if(val) {
        return 'T';
    }
    return 'F';
}
void Q1a(int p, int q, int r) {
    int i, s, t;
    printf("\np\tq\tr\tp ^ ~q v r\t");
    printf("~p v r\t");
    printf("s -> t\n");
    printf("----------------------------------------------------\n");
    for(i = 0; i < 8; i++) {

        s = getFirstExprRes(p, q, r);
        t = getSecExprRes(p, r);
        printf("%c\t", getTorF(p));
        printf("%c\t", getTorF(q));
        printf("%c\t", getTorF(r));
        printf("%c\t\t", getTorF(s));
        printf("%c\t", getTorF(t));
        
        if(s && !t) {
            printf("%c\n", getTorF(0));
        } else {
            printf("%c\n", getTorF(1));
        }
        alterValues(&p, &q, &r, i);       
    }
}

void Q1b(int p, int q, int r) {
    int i, s, t;
    printf("\np\tq\tr\tp ^ ~q v r\t");
    printf("~p v r\t");
    printf("s <-> t\n");
    printf("-------------------------------------------------------\n");
    for(i = 0; i < 8; i++) {
        s = getFirstExprRes(p, q, r);
        t = getSecExprRes(p, r);
        printf("%c\t", getTorF(p));
        printf("%c\t", getTorF(q));
        printf("%c\t", getTorF(r));
        printf("%c\t\t", getTorF(s));
        printf("%c\t", getTorF(t));        
        if((s && t) || (!s && !t)) {
            printf("%c\n", 'T');
        } else {
            printf("%c\n", 'F');
        }
        alterValues(&p, &q, &r, i);
       
    }
}
int main() {
    int p = 1, q = 1, r = 1;
    printf("\nQ.1(a)\n");
    Q1a(p, q, r);
    printf("\nQ.1(b)\n");
    Q1b(p, q, r);
    return 0;
}
