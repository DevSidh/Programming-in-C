#include<stdio.h>
int main(){
	int i;
	int n=1;
	printf("Enter a number \n");
	scanf("%d",&n);
	int k=n;
	for(i=1;i<k;i++){
	n*=i;
	}
	printf("factorial is :%d",n);
}