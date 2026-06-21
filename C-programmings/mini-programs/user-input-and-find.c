#include <stdio.h>
#include <ctype.h>

int getNum();
void askGPA();
void getName(char name[]);

int main(){

    int num;
    num = getNum(); // call the function to get a number from user

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int found = 0; // flag to indicate if number is found

    for(int i = 0; i < size; i++){
        if(arr[i] == num){
            printf("Number found at index: %d\n", i);
            found = 1; // set flag to indicate number is found
            break;
        }
    }
    
    if(!found){
        printf("Number not found in the array.\n");
    }

    askGPA(); // call the function to ask for GPA

    char name[50];
    getName(name); // call the function to get name from user

    return 0;
}

int getNum(){
    int num;
    while (1) {
        printf("Enter a number: ");
        if (scanf("%d", &num) == 1) {
            printf("You entered: %d\n", num);
            break;
        }
        printf("Invalid input. Please enter a valid integer.\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    return num;
}

void askGPA(){
    double gpa;

    while (1) {
        printf("Enter your GPA: ");

        if (scanf("%lf", &gpa) == 1 && gpa >= 0.0 && gpa <= 4.0) {
            printf("Your GPA is: %.2lf\n", gpa);
            break;
        }

        printf("Invalid input. Please enter a number between 0.0 and 4.0: ");

        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
}

void getName(char name[]){
    printf("Enter your name: ");
    scanf("%49s", name);
    int valid = 1; // flag to indicate if name is valid

    while (1) {
        for (int i = 0; name[i] != '\0'; i++) {
            if (!isalpha(name[i])) {
                valid = 0; // set flag to indicate name is invalid
                break;
            }
        }
        if (valid) {
            printf("Your name is: %s\n", name);
            break;
        } else {
            printf("Invalid input for name. Please reenter: ");
            scanf("%49s", name);
        }

        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }


}