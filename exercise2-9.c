#include <stdio.h>

int main(){
    int i = 0;
    int j = 0;
    while(i < 4){
        while( j <= i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

