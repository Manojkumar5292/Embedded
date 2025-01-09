#include<stdio.h>
#include<string.h>
struct time{
	int hr;
	int min;
	int sec;
	};
struct date{
	int day;
	int month;
	int year;
	struct time t;
};
struct student{
	char name[20];
	struct date dob;
}stu;
int main(){
	stu.dob.t.hr=20;
	printf("%d\n",stu.dob.t.hr);
	strcpy(stu.name, "MANOJ");
	stu.dob.day = 18;
	stu.dob.month = 9;
	stu.dob.year = 1998;
	stu.dob.t.hr = 1;
	stu.dob.t.min = 28;
	stu.dob.t.sec = 30;
	stu.dob.t.hr = 20;  
	//stu.dob.t={"MANOJ",18,9,1998,1,28,30};
	printf("Name : %s\nDay : %d\nMonth : %d\nYear: %d\nHR : %d\nMin : %d\nSec : %d\n",stu.name,stu.dob.day,stu.dob.month,stu.dob.year,stu.dob.t.hr,stu.dob.t.min,stu.dob.t.sec);
	return 0;
}
