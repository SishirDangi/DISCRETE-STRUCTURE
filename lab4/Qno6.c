/*Question no 6
Find a number in an array using binary search.
*/
#include <stdio.h>
int searchForNumber(int *array, int numToBeSearched, int size) {
    int low = 0, high = size-1;
    int mid, i;
    for(i = 0; i < size; i++) {
        printf("%d ", *(array+i));
    }
    while (low <= high) {
        mid = low + (high - low)/2;

        if ( *(array+mid) == numToBeSearched) {
            return mid;
        }

        if ( *(array+mid) > numToBeSearched) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

void descendingSort(int *array, int size) {
    int i, j, temp;
    for(i = 0; i < size; i++) {
        temp = *(array+i);
        j = i-1;
        while(j >=0 && *(array+j) < temp) {
            *(array+j+1) = *(array+j);
            j--;
        }
        *(array+j+1) = temp;
    }
}

int main() {
    int array[] = {23, 46, 7, -54, 2, 1, 75, 0}, number;
    printf("Enter the number to be searched: ");
    scanf("%d", &number);
    descendingSort(&array[0], 8);
    int result = searchForNumber(&array[0], number, sizeof array/sizeof array[0]);
    if( result != -1 ) {
        printf("\n'%d' found at index %d", number, result) ;
    } else {
        printf("\n'%d' not found!", number) ;
    }
    return 0;
}
