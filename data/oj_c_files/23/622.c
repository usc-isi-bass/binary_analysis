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
{	char a[10][10];
	int i,s=0;
	for(i=0;;i++)
		{cin>>a[i];s+=1;
		if(getchar()=='\n')
			break;}
cout<<a[s-1];
	for(i=s-2;i>=0;i--)
		cout<<" "<<a[i];
	return 0;
}