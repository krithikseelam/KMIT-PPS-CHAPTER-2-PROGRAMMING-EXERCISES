#include <stdio.h>
#include <math.h>

int main(){
    
    double a = 2, b = 2, c = 5, d = 6, e, f, p;

    f = pow(c - a, 2) + pow(d - b, 2);

    e = pow(f, 0.5) / 2;
    
    p = M_PI * e * e;

    printf("Area of the circle is : %f", p);

    

    return 0;
}

