#include <stdio.h>

int main(){
    
    int x, y, z;
    printf("Enter distance covered by the car(km): ");
    scanf("%d", &x);
    printf("Enter time taken by the car(in hours): ");
    scanf("%d", &y);
    z = x / y;
    printf("Speedometer(km/h): %d", z);
    



    return 0;
}

