#include <stdio.h>

int main(){

    //loop in java is like: for(int i=0; i<5; i++), C is similar
    for(int i=0; i<=6; i++){
        printf("%d ", i);
    }
    //so this will print 0 to 6, with one space in between

     printf("\n"); //to make the next printf message in a new line

    //a while loop that prints 67 to 60 :D
    int ex1 = 67;
    while(ex1 >= 60){
        printf("%d ", ex1);
        ex1--;
    }
    
    printf("\n");

    //a do-while loop that runs at least once, even if the condition is false, but doesnt end if without the ex2--;
    int ex2 = 69;
    do{
        printf("%d ", ex2);
        ex2--;
    } while(ex2 >= 67);

    return  0;
}