#include <stdio.h>
#include <stdlib.h>

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);
char enterOperator();
double enterNumber();

int main(){

    double num1, num2, result;
    char operator;

    num1 = enterNumber();

    operator = enterOperator();

    num2 = enterNumber();

    if(operator == '+'){
        result = add(num1, num2);
    } else if(operator == '-'){
        result = subtract(num1, num2);
    } else if(operator == '*'){
        result = multiply(num1, num2);
    } else if(operator == '/'){
        result = divide(num1, num2);
    } else {
        printf("Invalid code.\n");
        return 1; // Exit with an error code
    }

    printf("Result: %lf\n", result);

    return 0;
}

double add(double x, double y){
    return x + y;
}

double subtract(double x, double y){
    return x - y;
}

double multiply(double x, double y){
    return x * y;
}

double divide(double x, double y){
    if(y != 0){
        return x / y;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return -1; // Return -1 or handle the error as needed
    }
}

char enterOperator(){
    char buffer[100]; // Buffer to read input as a string
    char op;
    while (1) {
        printf("Enter operator (+ - * /): ");
        fgets(buffer, sizeof(buffer), stdin); // Read operator as a string to handle extra input
        op = buffer[0]; // Take the first character as the operator

        if (op == '+' || op == '-' || op == '*' || op == '/') {
            break;  // valid input, exit loop
        }

        printf("Invalid operator. Try again.\n");
    }

    return op;
}

double enterNumber(){
    double num;
    char buffer[100]; // Buffer to read input as a string

    while (1) {
        printf("Enter a number: ");

        fgets(buffer, sizeof(buffer), stdin); // Read number as a string to handle extra input
        double result = atof(buffer);

        if (sscanf(buffer, "%lf", &num) == 1) {
            return num;
        }

        printf("Invalid input. Please enter a valid number.\n");
    }
}