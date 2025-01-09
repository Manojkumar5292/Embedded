#include<stdio.h>
#define MAX 30
struct student{
	char name[MAX];
	int roll;
	int marks[4];
};
int main(){
	struct student stu[3];
	int i,j;
	for(i=0;i<3;i++){
		printf("ENter data for student %d", i+1);
		printf("Enter the name : ");
		scanf("%s",stu[i].name);
		printf(" Enter Roll No :");
		scanf("%d",&stu[i].roll);
		for(j=0;j<4;j++){
			printf("Enter marks for subject %d : ",j+1);
			scanf("%d", &stu[i].marks[j]);
		}
	}
	for(int i=0;i<3;i++){
		printf("Data of student : %d ",i+1);
		printf("Name : %s, Roll : %d\nMarks",stu[i].name,stu[i].roll);
		for(j=0;j<4;j++){
			printf("%d",stu[i].marks[j]);
		}
		printf("\n");
	}
	return 0;
}
