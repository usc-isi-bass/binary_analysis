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
 * ????????.cpp
 *
 *  Created on: 2010-12-24
 *      Author: wangwei
 */
struct student
{
	int id;
	int chinese;
	int math;
	int together;
}stu[100000],t;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>stu[i].id>>stu[i].chinese>>stu[i].math;
		stu[i].together=stu[i].chinese+stu[i].math;
	}
	for(i=0;i<3;i++)
		for(j=i;j<n;j++)
		{
			if(stu[i].together<stu[j].together)
			{
				t=stu[i];
				stu[i]=stu[j];
				stu[j]=t;
			}
		}
			for(i=0;i<3;i++)
			{
				cout<<stu[i].id<<' '<<stu[i].together<<endl;
			}
			return 0;
}