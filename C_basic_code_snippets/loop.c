#include<stdio.h>
#include<math.h>

int main(){
char s[30];
int n;
printf("Enter the name and number of times the name shoulf be printed:");
scanf("%s%d",s,&n);
for(int i=0;i<n;i++){
    printf("%s\n",s);
}
 


    return 0;
}
