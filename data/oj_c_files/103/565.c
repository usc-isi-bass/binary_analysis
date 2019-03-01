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

char a[1000];
main()
{
	int i,j,n=1;
	cin>>a;
	j=strlen(a);
	for(i=0;i<j;i++) if(a[i]>96) a[i]-=32;
	for(i=1;i<=j;i++)
	{
		if(a[i]==a[i-1]) n++;
		else
		{
			cout<<'('<<a[i-1]<<','<<n<<')';
			n=1;
			}
		}
	}
