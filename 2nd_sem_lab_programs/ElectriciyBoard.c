#include<stdio.h>
int main(){
    char name[50];
    double units, surcharge, amount;
    printf("Enter customer name: ");
    scanf("%[^\n]",name);
    printf("Enter number of units consumed: ");
    scanf("%lf", &units);
    if(units<=200){
        amount =units*0.80;
    }
    else if(units<=200 && units<=300){
        amount = 200*0.80 + (units-200)*0.90;
    }
    else{
        amount =units*1.00;
    }
    if(amount>400){
        surcharge = amount*0.15;
        amount = amount + surcharge;
    }
    printf("**********Customer Bill**********\n");
    printf("Customer Name: %s\n", name);
    printf("Units consumed: %.2lf\n", units);
    printf("Amount: %.2lf\n", amount);
    return 0;
    
}