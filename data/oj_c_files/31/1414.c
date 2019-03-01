#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	struct {
		char No[100];
		char name[20];
		char sex;
		int age;
		float grade;
		char address[20];
	} stu[10000];
	int i;
	cin>>stu[0].No>>stu[0].name>>stu[0].sex>>stu[0].age>>stu[0].grade>>stu[0].address;  //???????
	for(i=1;stu[i-1].No[0]!='e';i++){
		cin>>stu[i].No;
		if(stu[i].No[0]!='e')  //????end?????
            cin>>stu[i].name>>stu[i].sex>>stu[i].age>>stu[i].grade>>stu[i].address;
	}
	for(i=i-2;i>=0;i--)  //????
		cout<<stu[i].No<<" "<<stu[i].name<<" "<<stu[i].sex<<" "<<stu[i].age<<" "<<stu[i].grade<<" "<<stu[i].address<<endl;
	return 0;
}