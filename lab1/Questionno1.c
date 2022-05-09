/*
QUESTION NO.1 
Write a program that takes two or more sets as input and produces set
operations like union, intersection, difference and symmetric difference as
its output.
*/
#include <stdio.h>
#include <stdlib.h>
void getUnion(int [], int []);
void getIntersection(int [], int []);
void getDifference(int [], int [], int, int);
void getSymDifference(int [], int []);
int i, j, sizeA, sizeB, to, found = 0;
int main() {
    int setA[20], setB[20], choice;
    printf("Enter the size of set A: ");
    scanf("%d", &sizeA);
    printf("Enter the size of set B: ");
    scanf("%d", &sizeB);
    printf("Enter elements of setA: \n");
    for (i = 0; i < sizeA; i++) {
        printf("setA[%d]: ", i);
        scanf(" %d", &setA[i]);
    }
    printf("\nEnter elements of setB: \n");
    for (i = 0; i < sizeB; i++) {
        printf("setB[%d]: ", i);
        scanf(" %d", &setB[i]);
    }
    printf("\nSET A: { ");
    for (i = 0; i < sizeA; i++) {
        printf("%d ", setA[i]);
    }
    printf("}\nSET B: { ");
    for (i = 0; i < sizeB; i++) {
        printf("%d ", setB[i]);
    }
    printf("}\n\nEnter 1 to find Union");
    printf("\nEnter 2 to find Intersection");
    printf("\nEnter 3 to find Difference(A-B)");
    printf("\nEnter 4 to find Difference(B-A)");
    printf("\nEnter 5 to find Symmetric Difference");
    printf("\nPress 6 to exit.");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("\nUnion: \n{ ");
        getUnion(setA, setB);
        break;
        printf("}");
    case 2:
        getIntersection(setA, setB);
        break;
    case 3:
        getDifference(setA, setB, sizeA, sizeB);
        break;
    case 4:
        getDifference(setB, setA, sizeB, sizeA);
        break;
    case 5:
        getSymDifference(setA, setB);
        break;
    case 6:
        exit(0);
    default:
        printf("Invalid Choice");
        break;
    }
    
    
    return 0;
}

void getUnion(int setA[], int setB[]) {

    for(i = 0; i < sizeA; i++){
        printf("%d ", setA[i]);
    }

    for(i = 0; i < sizeB; i++){
        found = 0;
        for(j = 0; j<sizeA; j++){
            if(setB[i] == setA[j]){
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("%d ", setB[i]);
        }
    }
}

void getIntersection(int setA[], int setB[]) {
    printf("\nIntersection: \n{ ");
    for(i = 0; i < sizeB; i++){
        found = 0;
        for(j = 0; j<sizeA; j++){
            if(setB[i] == setA[j]){
                found = 1;
                break;
            }
        }
        if(found == 1) {
            printf("%d ", setB[i]);
        }
    }
    printf("}");
}

void getDifference(int setA[], int setB[], int sizeA, int sizeB){
    printf("\nDifference: \n{ ");
    for(i = 0; i < sizeA; i++){
        found = 0;
        for(j = 0; j<sizeB; j++){
            if(setA[i] == setB[j]){
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("%d ", setA[i]);
        }
    }
    printf("}");

}

void getSymDifference(int setA[], int setB[]) {
    int newSetA[sizeA], newSetB[sizeB], indexNA = 0, indexNB = 0;
    //A-B
    for(i = 0; i < sizeA; i++) {
        found = 0;
        for(j = 0; j<sizeB; j++) {
            if(setA[i] == setB[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            newSetA[indexNA] = setA[i];
            indexNA++;
        }
    }

    // B-A
    for(i = 0; i < sizeB; i++) {
        found = 0;
        for(j = 0; j<sizeA; j++) {
            if(setB[i] == setA[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            newSetB[indexNB] = setB[i];
            indexNB++;
        }
    }
    //(A-B)U(B-A)
    printf("\nSymmetric Difference: \n{ ");
    sizeA = indexNA;
    sizeB = indexNB;
    getUnion(newSetA, newSetB);
    printf("}");
}
