#include <stdio.h>
#include <math.h>

int main(){
    
    double a = 0, b = 0, c = 4, d = 5, e, f, p;

    f = pow(c - a, 2) + pow(d - b, 2);

    e = pow(f, 0.5);
    
    p = 2 * M_PI * e;

    printf("Circumference of the circle is : %f", p);

    


    

    return 0;
}

