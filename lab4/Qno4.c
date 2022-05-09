/*Question no 4
Sort an array using merge sort.
*/
#include <stdio.h>
void fillArray(int *array) {
    int i;
    for(i = 0; i < 10; i++) {
        printf("Array[%d]: ", i);
        scanf("%d", (array+i) );
    }
}

//Displays the array an array.
void displayArray(int *array) {
    int i;
    for(i = 0; i < 10; i++) {
        printf("%d ", *(array+i));
    }
}

void merge(int *array, int lowerb, int mid, int upperb) {
    int newArr[10];
    int i, j, k;
    i = lowerb, j = mid+1, k = lowerb;

    while(i<=mid && j<=upperb) {
        if(*(array+i) <= *(array+j)) {
            newArr[k++] = *(array+(i++));
        } else {
            newArr[k++] = *(array+(j++));
        }
    }
    if(i>mid) {
        while(j<=upperb) {
            newArr[k++] = *(array+(j++));
        }
    } else {
        while(i<=mid) {
            newArr[k++] = *(array+(i++));
        }
    }

    for(i=lowerb; i<=upperb; i++) {
        *(array+i) = newArr[i];
    }

}

void mergeSortAsc(int *array, int lowerb, int upperb) {
    int mid;
    if(lowerb < upperb) {
        mid = (lowerb + upperb)/2;
        mergeSortAsc(array, lowerb, mid);
        mergeSortAsc(array, mid+1, upperb);
        merge(array, lowerb, mid, upperb);
    }
}

int main() {
    
    int array;
    fillArray(&array);
    printf("Array before sorting:\n{");
    displayArray(&array);
    printf("}\n\nArray after sorting in ascending order:\n{");
    //Calling the function to sort an array in ascending order
    mergeSortAsc(&array, 0, 9);
    displayArray(&array);
    printf("}");
    return 0;
}
