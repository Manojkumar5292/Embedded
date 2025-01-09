#include<stdio.h>
#define MAX 30
struct student{
	char name[MAX];
	int rollNo;
};
void display(struct student);
int main(){
	struct student stu1={"MANOJ",21};
	struct student stu2={"GMK",16};
	display(stu1);
	display(stu2);
	return 0;
}
void display(struct student stu){
	printf("Name : %s\n",stu.name);
	printf("rollNo : %d\n",stu.rollNo);
}
