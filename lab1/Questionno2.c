/* Question NO.2
Write a program that takes two or more sets as input and produces their
Cartesian product as output.*/

#include <stdio.h>
int main() {
    int i, j, sizeA, sizeB;
    char setA[10], setB[10];
    printf("Enter the size of set A: ");
    scanf("%d", &sizeA);
    printf("Enter the size of set B: ");
    scanf("%d", &sizeB);
    printf("Enter elements of setA: \n");
    for (i = 0; i < sizeA; i++) {
        printf("setA[%d]: ", i);
        scanf(" %c", &setA[i]);
    }
    printf("\nEnter elements of setB: \n");
    for (i = 0; i < sizeB; i++) {
        printf("setB[%d]: ", i);
        scanf(" %c", &setB[i]);
    }

    printf("Cartesian Product:: \n{");
    for (i = 0; i < sizeA; i++) {
        for (j = 0; j < sizeB; j++) {
            printf("(%c, %c), ", setA[i], setB[j]);
        }
    }
    printf("}");

    return 0;
}
