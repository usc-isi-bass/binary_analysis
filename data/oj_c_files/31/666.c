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

/*
 * justexp.cpp
 *
 *  Created on: 2011-11-18
 *      Author: dell
 */
int main()
{
	struct data
	{
		char num[200];
		char name[200];
		char gender;
		int age;
		float score;
		char add[200];
	}student[2000];
	int count=0;
	while(true)
	{
		memset(student[count].num,'\0',sizeof(student[count].num));
		cin>>student[count].num;
		if(strcmp(student[count].num,"end")==0)
			break;
		cin>>student[count].name>>student[count].gender>>student[count].age>>student[count].score>>student[count].add;
		count++;
	}
	while(count--)
	{
		cout<<student[count].num<<" "<<student[count].name<<" "<<student[count].gender<<" "<<student[count].age<<" "<<student[count].score<<" "<<student[count].add<<endl;
	}
	return 0;
}