#include <stdio.h>

int main(){
    int age = 19;
    double acAge = 18.8;
    char name[] = "Calvin";  // to make char a string must add "[]" after the name of the variable

    //for printf with variables, dont forget to add those after \n
    printf("I'm %s, gonna be %d years old by the end of 2026 summer, right now is like %.2f years old.\n", name, age, acAge);
    //the %.2f forces the decimal place to be 2, vice versa
    
    return 0;
}