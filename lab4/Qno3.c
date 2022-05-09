/*Question no 3
Sort an array using insertion sort.
*/
#include <stdio.h>

//Fills the array with numbers inserted by the user.
void fillArray(int *array) {
    int i, num;
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

//Sorting an array in ascending order using insertion sort.
void ascendingSort(int *array) {
    int i, j, temp;
    for(i = 0; i < 10; i++) {
        temp = *(array+i);
        j = i-1;
        while(j >=0 && *(array+j) > temp) {
            *(array+j+1) = *(array+j);
            j--;
        }
        *(array+j+1) = temp;
    }
}

//Sorting an array in descending order using insertion sort.
void descendingSort(int *array) {
    int i, j, temp;
    for(i = 0; i < 10; i++) {
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
    
    int array;
    fillArray(&array);
    printf("Array before sorting:\n{");
    displayArray(&array);
    printf("}\n\nArray after sorting in ascending order:\n{");
    //Calling the function to sort an array in ascending order
    ascendingSort(&array);
    displayArray(&array);
    printf("}\n\nArray after sorting in descending order:\n{");
    //Calling the function to sort an array in descending order
    descendingSort(&array);
    displayArray(&array);
	printf("}");
    return 0;
}
