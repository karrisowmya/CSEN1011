/*ALGORITHM FOR SIMPLE CALCULATOR
1 Step: BEGIN.
2 Step: PRINT ENTER YOUR CHOICE.
3 Step: ENTER YOUR CHOICE.
4 Step: ENTER TWO OPERANDS FOR OPERATION.
5 Step: USER WILL ENTER +,-,*,/ .
6 Step: SWITCH(OPERATOR)
7 Step: DO THE OPERATION.
8 Step: PRINT THE RESULT.
8 Step: EXIT.*/


#include <stdio.h>
int main(){
    char ch;
    int a, b, result;
    printf("Enter an Operator (+, -, *, /): ");
    scanf("%c", &ch);
    printf("Enter first operand: \n");
    scanf("%d",&a);
    printf("Enter second operand: \n");
    scanf("%d",&b);
    switch(ch){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
    }
    printf("Result = %d", result);
    return 0;
}

/*output:
Enter an Operator(+,-,*,/): +
Enter first operand: 2
Enter second operand: 4
result=6*/
