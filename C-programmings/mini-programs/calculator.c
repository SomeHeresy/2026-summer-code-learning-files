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
    char op;
    while (1) {
        printf("Enter operator (+ - * /): ");
        scanf(" %c", &op);

        if (op == '+' || op == '-' || op == '*' || op == '/') {
            break;  // valid input, exit loop
        }

        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        printf("Invalid operator. Try again.\n");
    }

    return op;
}

double enterNumber(){
    double num;
    
    while (1) {
        printf("Enter a number: ");

        int result = scanf("%lf", &num);

        if (result == 1) {
            // clean leftover input
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            return num;
        }

        printf("Invalid input. Please enter a valid number.\n");

        // clear bad input like "23d"
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
}