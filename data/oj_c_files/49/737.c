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
	char a[500];//??????
	cin.getline(a,500);//?????
	int i,j,k,m,l,s;
	l=strlen(a);//???????
	for(i=1;i<=l-1;i++)
	{
		for(j=0;j<=l-1-i;j++)
		{
			for(k=0,s=0;k<(i+1)/2;k++)
			{
				if(a[j+k]==a[j+i-k])s=0;//????j+i??????????????s=0
				else {s=s+1;break;}//???s=s+1,????
			}
			if(s==0)//??s=0
			{
				for(m=j;m<=j+i;m++)
					cout<<a[m];//??????
				cout<<endl;
			}
		}
	}
	return 0;
}