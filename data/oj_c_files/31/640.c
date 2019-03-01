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
 * 78.cpp
 * ??????
 *  Created on: 2011-12-11
 * ??????????????????????????????????????????
 */

int main()
{
	int i,j;
	struct
	{
		char number[40];
		char name[40];
		char sex;
		int old;
		double point;
		char address[40];
	}student[1000];
	for(i=0;i<1000;i++)
	{
		cin>>student[i].number;
		if((student[i].number[0]=='e')&&(student[i].number[1]=='n')&&(student[i].number[2]=='d')&&(student[i].number[3]=='\0')) break;
		cin>>student[i].name>>student[i].sex>>student[i].old>>student[i].point>>student[i].address;
	}
    for(j=i-1;j>=0;j--)
    {
    	cout<<student[j].number<<" "<<student[j].name<<" "<<student[j].sex<<" "<<student[j].old<<" "<<student[j].point<<" "<<student[j].address<<endl;
    }
	return 0;
}
