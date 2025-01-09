#include<stdio.h>

int main(){
	int arr[5];
	printf("Enter values of arr :\n");
	for(int i = 0; i < 5; i++)
		scanf("%d",&arr[i]);
	for(int i = 0; i < 5; i++)
		printf("arr[%d] = %d\n",i,arr[i]);
	int arr1[5]={0};
	for(int i = 0; i < 5; i++)
		arr1[i] = arr[i];
	for(int j = 0; j < 5; j++)
		printf("arr1[%d] = %d\n",j,arr1[j]);
	return 0;
}
