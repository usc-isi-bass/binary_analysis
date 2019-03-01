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

int main()
{
	int n,i,j;
	cin>>n;
	struct student
	{
		int num;
		int yuwen;
		int shuxue;
		int sum;
	}stu[100000];
	for(i=0;i<n;i++)
	{
		cin>>stu[i].num>>stu[i].yuwen>>stu[i].shuxue;
		stu[i].sum=stu[i].yuwen+stu[i].shuxue;
	}
	int max=0,maxj=0;
	if(n>=3)
	{
	for(i=0;i<n;i++)
	if(stu[i].sum>max)
	{
		max=stu[i].sum;
		maxj=i;
	}
	cout<<stu[maxj].num<<' '<<stu[maxj].sum<<endl;
	stu[maxj].sum=0;max=0;
	for(i=0;i<n;i++)
		if(stu[i].sum>max)
		{
			max=stu[i].sum;
			maxj=i;
		}
		cout<<stu[maxj].num<<' '<<stu[maxj].sum<<endl;
		stu[maxj].sum=0;max=0;
		for(i=0;i<n;i++)
			if(stu[i].sum>max)
			{
				max=stu[i].sum;
				maxj=i;
			}
			cout<<stu[maxj].num<<' '<<stu[maxj].sum<<endl;
	}
	else 
	{
		if(stu[0].sum>stu[1].sum)
			cout<<stu[0].num<<' '<<stu[0].sum<<endl<<stu[1].num<<' '<<stu[1].sum;
		else cout<<stu[1].num<<' '<<stu[1].sum<<endl<<stu[0].num<<' '<<stu[0].sum;
	}
			return 0;
}