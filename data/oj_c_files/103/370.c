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
	char a[1100];
	gets(a);
	int i,j,k,count=0;
	char b=0;
	i=0;
	while(1)
	{
		if(i>strlen(a))break;
		if(a[i]<='z'&&a[i]>='a')a[i]+='A'-'a';
		if(b==0){b=a[i];count=1;i++;continue;}
		if(a[i]==b)
			count++;
		else
		{
				
				cout<<"("<<b<<","<<count<<")";b=a[i];count=1;
			}
		i++;
	}

	return 0;
}