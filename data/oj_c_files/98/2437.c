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
	char a[1000][50];
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>*(a+i);
	int e=1;
	int len=0;
	for(i=1;i<=n;i++)
	{
		if(e)
		{
			cout<<*(a+i);
			e=0;
			len=strlen(*(a+i))+1;
		}
		else
		{
			if((len+strlen(*(a+i)))>80)
			{
				cout<<endl;
				len=0;
				i--;
				e=1;
			}
			else
			{
				cout<<' '<<*(a+i);
				len+=strlen(*(a+i))+1;
			}
		}
	}
	return 0;
}
