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
	int i,l;
	char x[100],*p;
	gets(x);
	l=strlen(x);
	p=x;
	for(i=0;i<l;i++)
	{
		if((x[i]>='0'&&x[i]<='9')==0)
		{
			x[i]=0;
		}
	}
	cout<<p<<endl;
	
		for(i=0;i<l;i++)
		{
			if(x[i]==0&&x[i+1]!=0)
			{
				cout<<(p+i+1)<<endl;
			}
		}



		return 0;
}


	

