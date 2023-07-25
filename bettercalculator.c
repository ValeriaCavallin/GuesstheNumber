#include <stdio.h>
#include<stdlib.h>

int main(){
/*variables*/
    double num1;
    double num2;
    char op;
/*prompts and store*/
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op); /*leave a space before %c*/
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if (op=='+'){
        printf("%f", num1 + num2);  
    }else if(op== '-'){
        printf("%f", num1 - num2);
    }else if(op== '/'){
        printf("%f", num1 / num2);
    }else if(op== '*'){
        printf("%f", num1 * num2);
    }else{
        printf("Invalid Operator");
    }

    return 0;
}