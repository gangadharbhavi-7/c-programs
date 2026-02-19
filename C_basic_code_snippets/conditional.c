#include<stdio.h>
#include<math.h>

int main(){
 int a,b;
 printf("enter a numbers:");
 scanf("%d%d",&a,&b);
 int largest=(a>b)?a:b;
 printf("largest number is %d",largest);



    return 0;
}
