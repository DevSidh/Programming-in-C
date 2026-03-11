#include<stdio.h>
int main(){
	int n,k,rem;
	printf("Enter a number \n");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		k=k*10+rem;
		n/=10;
	}
	printf("the reverse number is :%d",k);
	return 0;
}