#include <stdio.h>
#include <math.h>

int main(){
    
    double a, b, c, s, x;
    printf("Enter side a: ");
    scanf("%lf", &a);
    printf("Enter side b: ");
    scanf("%lf", &b);
    printf("Enter side c: ");
    scanf("%lf", &c);
    s = (a + b + c)/2 ;
    x = pow(s * (s - a) * (s - b) * (s - c), 0.5);
    printf("%.2lf square units.", x);
    



    return 0;
}

