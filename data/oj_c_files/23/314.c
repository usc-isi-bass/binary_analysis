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
	int a[100]={0},i,j=1,m,n;
	char ch[100]={'\0'};
	for(i=1;i<100;i++)
	{
		ch[i]=cin.get();
		if(ch[i]==' ')
		{
			a[j]=i;
			j++;
		}
		if(ch[i]=='\n')
		{
			a[j]=i;
			m=i;
			n=j;
			break;
		}
	}
	for(j=n-1;j>=0;j--)
	{
		for(i=a[j]+1;i<a[j+1];i++)
			cout<<ch[i];
		if(j!=0)
			cout<<" ";
	}
	return 0;
}