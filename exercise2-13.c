#include <stdio.h>
#include <math.h>

int main(){
    
    double a, b, c, d, e, f;
    printf("Enter x1 : ");
    scanf("%lf", &a);
    printf("Enter side y1: ");
    scanf("%lf", &b);
    printf("Enter side x2: ");
    scanf("%lf", &c);
    printf("Enter side y2: ");
    scanf("%lf", &d);

    f = pow(c - a, 2) + pow(d - b, 2);

    e = pow(f, 0.5);

    printf("Distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) is %lf", a, b, c, d, e);


    

    return 0;
}

