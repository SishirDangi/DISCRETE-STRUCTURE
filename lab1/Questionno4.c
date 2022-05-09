/*Write a program that takes name and age of a 5 persons as an input and
gives the degree of membership of the person as its output according to
following membership functions.
a.
Degree of membership = 1                if age<=15
Degree of membership = (35-age)/20      if age>15 and age<=35
Degree of membership = 0                if age>35
*/

#include <stdio.h>
int i;
void printQ4aFuzzySet(int age[], char names[][15]){

    printf("Question (4a): \n");

    printf("{");
    
    for(i = 0; i<5; i++) {
        printf("(%s, ", names[i]);
       if(age[i] <= 20){
           printf("1), ");
       } else if (age[i] > 30){
           printf("0), ");
       } else {
           printf("%.2lf), ", (30.0-age[i])/10);
       }
    }
    
    printf("}");
    
}
/*  b.
Degree of membership = 1                if age<=20
Degree of membership = (30-age)/10      if age>20 and age<=30
Degree of membership = 0                if age>30  */
void printQ4bFuzzySet(int age[], char names[][15]){
    printf("\nQuestion 4b): \n");
    printf("{");
    for(i = 0; i<5; i++) {
        printf("(%s, ", names[i]);
       if(age[i] <= 15){
           printf("1), ");
       } else if (age[i] > 35){
           printf("0), ");
       } else {
           printf("%.2lf), ", (35.0-age[i])/20);
       }
    }    
    printf("}");
}
/*Perform set operations according to rules of fuzzy sets, on these
two sets.*/

int main() {

    char names[5][15];
    int age[5],j;

    for(i = 0; i<5; i++) {
        printf("Enter name and age of the person: ");
        scanf(" %s %d", names[i], &age[i]);
    }

    printQ4aFuzzySet(age, names);  
    printQ4bFuzzySet(age, names);  

    return 0;
}
