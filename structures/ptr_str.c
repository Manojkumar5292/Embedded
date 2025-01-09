#include<stdio.h>
#define MAx 30
struct student{
	char name[MAx];
	int *pptr;
};
int main(){
	struct student stu;
	int val=30;
	stu.pptr=&val;
	printf("%d\n",*stu.pptr);
	return 0;
}
