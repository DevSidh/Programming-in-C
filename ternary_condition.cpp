#include<stdio.h>
int main(){
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("The number is %s",num%2==0?"even":"odd");
}