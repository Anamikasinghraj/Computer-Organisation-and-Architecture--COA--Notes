//Addition, Subtraction, Multiplicatin, Division program

#include<stdio.h>
int main()
{
    int num1, num2, diff,Prod,Div,Add;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    diff = num1 - num2;
    Add =num1+num2;
    Prod=num1*num2;
    Div=num1/num2;
    printf("Difference: %d\n",diff);
    printf("Add:%d\n",Add);
    printf("Prod:%d\n",Prod);
    printf("Div:%d\n",Div);
    return 0;
}
