#include<stdio.h>
int main(){
	int a=0,temp,b=1,i;
	printf("the series are :");
	for(i=1;i<=10;i++){
		temp=a+b;
		a=b;
		b=temp;
		
		printf("%d \t",a);
	}
	

	return 0;
}