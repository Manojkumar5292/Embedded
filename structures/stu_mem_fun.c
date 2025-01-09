#include<stdio.h>
#define MAX 30
struct student{
	char name[MAX];
	int rollNo;
};
void display(char name[], int rollNo);
int main(){
	struct student st={"MANOJ",21};
	display(st.name,st.rollNo);
	struct student st1={"YADAV",1};
	display(st1.name,st1.rollNo);
	return 0;
}
void display(char name[],int rollNo){
		printf("name : %s\n",name);
		printf("rollNo : %d\n",rollNo);
		}
