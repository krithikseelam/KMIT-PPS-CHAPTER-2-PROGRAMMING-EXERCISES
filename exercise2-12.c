#include<stdio.h>
int main(){
	int x, y;
	printf("Enter values of x,y: ");
	scanf("%d,%d",&x,&y);
	
	printf("\nx = %d\t\t\t y = %d",x,y);
	printf("\nsum = %d\t\t\t Difference = %d",x+y,x-y);
	printf("\nProduct = %d\t\t\t Division = %.2f",x*y,(float)x/y);
	
	return 0;
}
