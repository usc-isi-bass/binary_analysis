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
    int s=0,i,q,y,m,d;
    int k[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int r[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    char w[][10]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
    cin>>y>>m>>d;
    if(y==1111111111)
    {
		cout<<"Sat."<<endl;
		return 0;
	}
    for(i=1;i<=y-1;i++)
    {
		if(i%4==0&&i%100!=0||i%400==0)
		{
			s=(s+366)%7;
		}
		else
		{
			s=(s+365)%7;
		}
	}
	if(y%4==0&&y%100!=0||y%400==0)
	{
		for(i=1;i<m;i++)
		{
			s=(s+r[i])%7;
		}
		for(i=1;i<d;i++)
		{
			s=(s+1)%7;
		}
	}
	else
	{
		for(i=1;i<m;i++)
		{
			s=(s+k[i])%7;
		}
		for(i=1;i<d;i++)
		{
			s=(s+1)%7;
		}
	}
	cout<<w[s]<<endl;
    cin>>q;
    return 0;
}