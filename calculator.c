#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter First Number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Enter the operation you want to perform (+,-,*,/,%%,^):\n");
    scanf(" %c",&op);
    switch(op){
        case '+':
        printf("%d + %d =%d\n",a,b,a+b);
        break;
        case '-':
        printf("%d - %d =%d\n",a,b,a-b);
        break;
        case '*':
        printf("%d * %d =%d\n",a,b,a*b);
        break;
        case '/':
        printf("%d /%d =%d \n",a,b,a/b);
        break;
        case '%':
        printf("%d %% %d =%d\n",a,b,a%b);
        break;
        case '^':
        printf("%d ^ %d =%d\n",a,b,a^b);
        break;
        default:
        printf("Invalid Operation\n");
        break;

    }
    return 0;
}
