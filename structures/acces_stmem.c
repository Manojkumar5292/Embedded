#include<stdio.h>
#define MAX 30
struct student{
	char name[MAX];
	int roll;
	int marks;
};
int main(){
	struct student stu = {"manoj",21,76};
        struct student st1;
	scanf("%s",&st1.name);
	scanf("%d %d",&st1.roll,&st1.marks);
	printf("%s %d %d",stu.name,stu.roll,stu.marks);
	printf("\n%s %d %d",st1.name,st1.roll,st1.marks);
	return 0;
}
