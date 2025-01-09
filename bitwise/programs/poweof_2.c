#include<stdio.h>
int power(int n){
	return (n&(n-1))==0 && n>0;
}
int main(){
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	//power(n);
	if(power(n))
		printf("%d is a power of two",n);
	else
		printf("%d is not a power of two",n);
	return 0;
}
