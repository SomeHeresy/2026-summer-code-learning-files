#include <stdio.h>

int main() {

    int numarr[6] = {1, 2, 3, 4, 5, 6}; //array of integers with 6 elements

    for(int i=0; i<6; i++){
        printf("%d ", numarr[i]);
    }

    numarr[2] = 128;

    printf("\n");

    for(int i=0; i<6; i++){
        printf("%d ", numarr[i]);
    }

    //auto find size, BUT DOES NOT WORK IN FUNCTIONS
    int num2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int size = sizeof(num2) / sizeof(num2[0]); //total byte size/byte size of one element

    printf("\nnum2: ");

    for(int i=0; i<size; i++){
        printf("%d ", num2[i]);
    }

    printf("\nsize of num2 is: %d\n", size);

    //auto find size in functions
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    void printArr(int arr[], int arrSize){
        for(int i=0; i<arrSize; i++){
            printf("%d ", arr[i]);
        }
    }

    printArr(arr, arrSize);

    return 0;
}