#include <stdio.h>

int main(){
    int age = 19;
    double acAge = 18.8;
    char name[] = "Calvin";  // to make char a string must add "[]" after the name of the variable

    //%d for int, %f for float/double, %.2f for 2 decimal places, %c for char, %s for string
    //for printf with variables, dont forget to add those after \n
    //and \n means next printf message will be printed in a new line
    printf("I'm %s, gonna be %d years old by the end of 2026 summer, right now is like %.2f years old.\n", name, age, acAge);
    
    return 0;
}