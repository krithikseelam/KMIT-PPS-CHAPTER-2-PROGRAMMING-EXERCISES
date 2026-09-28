#include<stdio.h>
int main(){
	int number,table;
	int i = 1;
	printf("Which no table do you want: \n");
	scanf("%d",&number);

	printf("Till which number do you want the table: \n");
	scanf("%d",&table);

	while(i<=table){
		printf("%d X %d = %d\n",number,i,number*i);
		i++;
	}	

	return 0;
}
