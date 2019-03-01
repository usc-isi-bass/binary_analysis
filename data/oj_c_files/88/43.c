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
	char a[31];
	int i,len,p=1;
	gets(a);
	len=strlen(a);
	if(a[0]>='0'&&a[0]<='9')
		cout<<a[0];
	for(i=1;i<len;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			  if(p==0)
				  cout<<endl;
				cout<<a[i];
				p=1;
		}
	    else
        {
			p=0;
		}
	}
	return 0;
}



