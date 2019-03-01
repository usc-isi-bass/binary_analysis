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
	char a[501];
	char *p,*t,*m;
	cin>>a;
	int la,i,flag=1;
	la=strlen(a);
	for(i=1;i<la;i++)
	{
		for(p=a+i;p<a+la;p++)
		{
			flag=1;
			for(t=p-i,m=p;t<=m;t++,m--)
			{
				if(*t!=*m)
				{
					flag=0;
					break;
				}
			}
			if(flag)
			{
				for(t=p-i;t<=p;t++)
					cout<<*t;
				cout<<endl;
			}
		}
	}
	return 0;
}