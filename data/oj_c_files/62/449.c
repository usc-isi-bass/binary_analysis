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
	char a[200];
	int i=0,t=0,j=0;
	cin.getline(a,200,'\n');
	while(a[t]!='\0')
		t++;
	for(i;i<t;i++)
		if((a[i]==' ')&&(a[i-1]==' '))
		{
			int u=i;
			for(u;u<t;u++)
				a[u]=a[u+1];
			i--;
		}
		while(a[j]!='\0')
		{
			cout<<a[j];
			j++;
		}
	
	return 0;
}