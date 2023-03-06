//
// Created by Mac on 3/5/23.
//
#include <stdio.h>
float sum(float x, float y);
float min(float x, float y);
float mul(float x, float y);
float div(float x, float y);
int main(){
    float num1, num2;
    char operator;
    float result;
    printf("WELCOME TO MY OWN CALCULATOR:\n");
        scanf("%f",&num1);
        scanf("%c",&operator);
        scanf("%f",&num2);
        switch(operator){
            case '+':
                result = sum(num1,num2);
                printf("Result: %5.2f",result);
                break;
            case '-':
                result = min(num1,num2);
                printf("Result: %5.2f",result);
                break;
            case '*':
                result = mul(num1,num2);
                printf("Result: %5.2f",result);
                break;
            case '/':
                result = div(num1,num2);
                printf("Result: %5.3f",result);
                break;
        }
    }
float sum(float x, float y){
    return x + y;
}
float min(float x, float y){
    return x - y;
}
float mul(float x, float y){
    return x * y;
}
float div(float x, float y){
    if (y == 0){
        printf("Error!, Cannot devise by 0");
        return 0;
    }
    else{
        return x / y;
    }

}