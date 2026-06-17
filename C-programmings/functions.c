#include <stdio.h>


//dont forget to add variable types, humm, int main, could there be like double main? or String main?

/*i put the function before the main. So can run without prototyping.
But if i put the function afer main then i gotta add a prototype in the front*/
int add(int num1,  int num2){
    return num1 + num2;
}

int main(){

    int ans = add(6, 7);
    
    printf("6 + 7 = %d\n", ans);

    return 0;
}