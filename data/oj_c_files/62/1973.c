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
	int i,l;
	char a[100],*p=NULL,*q=NULL;
	cin.getline(a,100);
    l=strlen(a);
	p=a;
	for(i=0;i<l-1;i++)
	{
		if(*(p+i)==' '&&*(p+i+1)==' ')
		{
			for(q=a+i+1;*q!=0;q++)
				*q=*(q+1);
			i--;
			l--;
		}
	}
	cout<<a<<endl;
	return 0;
}
