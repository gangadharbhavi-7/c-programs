#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c , discriminant, root1, root2, realpart, imgpart;
    printf("Enter coefficients of a quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b*b - 4*a*c;
    if(a==0){
        printf("not a quadratic equation!");
    }
    else{
        if(discriminant > 0){
            root1= (-b + sqrt(discriminant))/ (2*a);
            root2= (-b - sqrt(discriminant))/ (2*a);
            printf("Roots are real and distinct: %.2lf and %.2lf", root1, root2);
        }
        else if(discriminant == 0){
            root1 = root2 = -b / (2*a);
            printf("Roots are equal and real: %.2lf", root1);
        }
        else{
            realpart= -b/(2*a);
            imgpart = sqrt(-discriminant)/(2*a);
            printf("Roots are complex and different: %.2lf +%.2lfi and %.2lf - %.2lfi", realpart, imgpart, realpart, imgpart);
        }
    }
}