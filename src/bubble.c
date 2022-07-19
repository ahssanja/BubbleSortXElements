#include <stdio.h>

void sortArray(long long int size, long long int array[size]);
void printArray(long long int size, long long int array[size]);

int main(void) {

    printf("Enter the number of elements you want in your array: ");

    long long int elements = 0;
    scanf("%lld", &elements);

    if(elements < 0) {
        printf("invalid elements");
        return 1;
    }

    long long int array[elements];

    for(long long int i = 0; i < elements; i++){
        printf("What number would you like to store in the %lld place of the array: ", (i+1));

        long long int number;
        scanf("%lld", &number);

        array[i] = number;
    }

    sortArray(elements, array);

    return 0;
}

void sortArray(long long int size, long long int array[size]) {

    long long int temp;

    for(long long int i = 0; i < (size - 1); i++){
        for(long long int j = 0; j < (size - 1); j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printArray(size, array);
}

void printArray(long long int size, long long int array[size]) {
    for(long long int i = 0; i < size; i++){
        if(i == (size-1)){
            printf("%lld", array[i]);
        }
        else{
            printf("%lld, ", array[i]);
        }
    }
    printf("\n");
}
