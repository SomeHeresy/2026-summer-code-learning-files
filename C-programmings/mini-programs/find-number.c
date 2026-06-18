#include <stdio.h>

int main(){

    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        if(arr[i] == num){
            printf("Number found at index: %d\n", i);
            return 0;
        }
    }
    printf("Number not found in the array.\n");

    return 0;
}