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
	char a[100],b[100],c;
	int i=0,j=0,k=0;
	while(cin.get(c)&&c!='\n')
		a[i++]=c;//???????
	for(j=0;j<i;j++)
	{
		if(a[j]==32&&a[j+1]==32)
			continue;//?????????,??
		else 
			b[k++]=a[j];//??????b[100]?
	}
	for(int n=0;n<k;n++)
		cout<<b[n];//????
	return 0;
}