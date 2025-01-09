#include<stdio.h>
#include<string.h>
#define MAX 30
void my_strcpy(char arr[MAX]){
	char des[MAX];
	while(*arr!='\0'){
		*des=*arr;
		*des++;
		*arr++;
	}
	*des='\0';
	printf("%s\n",des);
}
int main(){
	char arr[MAX]={"MANOJKUMAR"};
	my_strcpy(arr);
	return 0;
}
