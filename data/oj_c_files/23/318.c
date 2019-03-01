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
	cin.getline(a,100,'\n');//?????
	int l,i,j;
	l=strlen(a);
	for(i=strlen(a)-1;i>=0;i--)//???????
	{	
		if(a[i]==' ')
		{
			for(j=i+1;j<l;j++)
				cout<<a[j];
			cout<<' ';
			l=i;
		}
	}
	for(i=0;i<l;i++)
		cout<<a[i];
	return 0;
}