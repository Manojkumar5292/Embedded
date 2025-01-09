#include<stdio.h>
#define MAX 30
struct student{
	char name[MAX];
	int rollNo;
	int marks;
};
void dec_mrks_stu(struct student stu[]);
void display(struct student);
int main(){

	struct student stu[3]={{"KUMAR",21,99},{"YADAV",19,67},{"LAKSH",13,85}};
	dec_mrks_stu(stu);
	for(int i=0;i<3;i++){
		display(stu[i]);
	}
	return 0;
}
void dec_mrks_stu(struct student stu[]){
	for(int i=0;i<3;i++){
		stu[i].marks=stu[i].marks-10;
	}
}
void display(struct student stu){
	printf("Name : %s\nrollNo : %d\nmarks : %d\n",stu.name,stu.rollNo,stu.marks);
}


