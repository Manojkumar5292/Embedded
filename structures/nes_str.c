#include<stdio.h>
#define MAX 30
struct student{
	char name[MAX];
	int roll;
	struct dob{
		int day;
		int month;
		int year;
	};
	char sc_name[MAX];
};
int main(){
	struct student stu;
	printf("sizeof=%d\n",sizeof(stu));
	return 0;
}
