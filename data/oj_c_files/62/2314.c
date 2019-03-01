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
	int i,j;
	char a[10000];
	cin.getline(a,10000);
	for(i=0;i<10000;i++)
		if(a[i]!=' '){
			cout<<a[i];break;
		}
 int len=strlen(a);
	for(j=i+1;j<len;j++)
	{
		if(!((a[j]==' ')&&a[j+1]==' '))cout<<a[j];
	}

	return 0;
}
