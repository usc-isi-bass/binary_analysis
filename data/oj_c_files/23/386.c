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
	int b[100],i,j=0,len=0;
	while(cin.get(a[len])) len++;
	for(i=0;i<len;i++)
	{
		if(a[i]==' '||i==len-1)
		{
			b[j]=i;j++;
		}
	}
	for(;j>=2;j--)
	{
		i=b[j-2]+1;
	    for(i=b[j-2]+1;i<b[j-1];i++)
		   cout.put(a[i]);
	cout<<' ';
	}
    i=0;
	for(i=0;i<b[0];i++)
		cout.put(a[i]);
	return 0;
}