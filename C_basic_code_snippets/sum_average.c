#include<stdio.h>
int main(){
    int num1, num2, sum;
    float average;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1+num2;
    average =sum/2.0;
    printf("The sum of %d and %d is : %d\n", num1,num2,sum);
    printf("The average of %d and %d is : %.6f\n", num1,num2,average);
    return 0;
}
