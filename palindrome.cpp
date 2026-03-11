#include<stdio.h>
int main(){
	int n,k,rem,temp;
	printf("Enter a number \n");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		rem=n%10;
		k=k*10+rem;
		n/=10;
	}
	printf("the reverse number is :%d",k);
	if(temp==n){
		printf("it is palindrome");
	}else{
		printf("it is not")
	}
	
	return 0;
}