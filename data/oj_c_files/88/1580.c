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

//@@@@???????@@@@@@@@@@@//
//@@@@?????@@@@@@@@@@@@@@@//
//@@@@???12/11@@@@@@@@@@@@@@//
int main()
{
	char str[31];
	int i,j,l,a[31]={0};
	cin.getline(str,31);
	l=strlen(str);
    for(j='0';j<='9';j++)
	{
		if(str[0]==j)
		{
			cout<<str[0];
			a[0]=1;
			break;
		}
	}
	for(i=1;i<l;i++)
	{
		for(j='0';j<='9';j++)
		{
			if(str[i]==j)
			{
				cout<<str[i];
				a[i]=1;
				break;
			}
		}
		if(a[i-1]==1&&j=='9'+1)cout<<endl;
	}
}