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
	cin.getline(a,200);
	int l,i,flag=0;
	l=strlen(a);
	for(i=0;i<l;i++)
		if(flag==0)
		{
			cout << a[i];
			if(a[i]==' ')
				flag=1;
		}
		else
			if(a[i]!=' ')
			{
				flag=0;
				i--;
			}
			cout << endl;
}
			
		
