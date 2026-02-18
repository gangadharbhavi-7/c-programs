#include<stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("choose an conversion:\n1. celsius to fahrenheit\n2. fahrenheit to celsius\n");
    int choice;
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice==1){
        printf("Enter temperature in celsius:");
        scanf("%f",&celsius);
        fahrenheit=(celsius*9/5)+32;
        printf("%.2f celsius is equal to %.2f fahrenheit",celsius,fahrenheit);

    }
    else{
        printf("Enter temperature in fahrenheit:");
        scanf("%f",&fahrenheit);
        celsius = (fahrenheit-32)*5/9;
        printf("%.2f fahrenheit is equal to %.2f celsius",fahrenheit , celsius);
    }
  
    return 0;
}
