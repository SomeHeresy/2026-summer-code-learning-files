#include <stdio.h>
#include <stdlib.h>

int main (){

    int age = 19;
    double gpa = 3.5;
    char grade = 'A';

    //pointers storing the memory address of the variables
    int *agePtr = &age;
    double *gpaPtr = &gpa;
    char *gradePtr = &grade;

    //use %p to print memory address of the pointers
    printf("Age: %p\n", agePtr);
    printf("GPA: %p\n", gpaPtr);
    printf("Grade: %p\n", gradePtr);

    //dereferencing pointers, so referring to the original stored values
    printf("Age: %d\n", *agePtr);
    printf("GPA: %f\n", *gpaPtr);
    printf("Grade: %c\n", *gradePtr);

    printf("\n");
    printf("\n");

    //1025 = 00000000 00000000 00000100 00000001 in binary
    //00000001 is the first byte, 00000100 is the second byte, and the rest are 0s.
    int num = 1025;
    int *pNum = &num;

    printf("Address of num: %p\n", pNum);
    printf("Value of num: %d\n", *pNum);

    char *pChar = (char*)pNum; //casting the int pointer to char pointer
    printf("Address of num (as char pointer): %p\n", pChar);
    printf("Value of num (as char pointer): %d\n", *pChar); //dereferencing the char pointer, which only look at this 1st byte.
    printf("Address of the next byte: %p\n", pChar+1);
    printf("Value of num (as char pointer + 1): %d\n", *(pChar + 1)); //dereferencing the char pointer, which only look at this 2nd byte.

    return 0;
}