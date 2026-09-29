#include <stdio.h>

int add(int m, int n){
    return m + n;
}
int sub(int m, int n){
    return m - n;
}

int main(){
    
    int x = 20;
    int y = 10;
    int a = add(x, y);
    int b = sub(x, y);

    printf("%d + %d = %d\n",x, y, a);
    printf("%d - %d = %d",x, y, b);


    return 0;
}

