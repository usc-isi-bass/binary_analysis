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
	char a[100];
	gets (a);
	int i,j,k;
	int d,b,c=0;
	d=strlen(a);
	for(i=0;i<d;i++)
	{
		if(a[i]==' ')
		{
			b=i;
			break;
		}
	}
	if((d-2*b-1)!=0)
		cout<<"NO"<<endl;
	else
	{
		for(j=0;j<b;j++)
		{
			for(k=i+1;k<d;k++)
			{
				if(a[j]==a[k]){
					c++;
				    a[k]=' ';
				    break;
				}
			}
		}
		if(c==b)
			cout<<"YES";
		else
			cout<<"NO";
	}
	return 0;

}