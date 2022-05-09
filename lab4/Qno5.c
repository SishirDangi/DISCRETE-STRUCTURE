/*Question no 5
Find a number in an array using linear search.
*/

#include <stdio.h>
void searchForNumber(int *array, int numToBeSearched, int size) {
    int i, flag = 0;
    for(i = 0; i < size; i++) {
        if(numToBeSearched == *(array+i)) {
            printf("Found the number '%d' at index %d", *(array+i) , i);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("%d Not found!!", numToBeSearched);
    }

}
int main() {
    int array[] = {5, 23, 7, 4, 1, 90, 7, 4, 9, 0}, number;
    printf("Enter the number to be searched: ");
    scanf("%d", &number);
    searchForNumber(&array[0], number, sizeof array/sizeof array[0]);
    return 0;
}
