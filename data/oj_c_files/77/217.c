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

void line(char a[100],int b)
{
	int i,j;
	for(i=0;i<b;i++)
	{
		if(a[i]!=a[0])
		{
			for(j=i;j>=0;j--)
			{
				if(a[j]!=a[i]&&a[j]==a[0])
				{
					cout<<j<<' '<<i<<endl;
					a[j]=a[i]=0;break;
				}
				
			}}
		
	}}




int main()
{
	char a[100];
	cin>>a;
	int n;
	n=strlen(a);
	line (a,n);
	return 0;
}

