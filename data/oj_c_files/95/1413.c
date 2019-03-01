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
    char a[81],b[81];
	int i;
	gets(a),gets(b);
	for(i=0;i<80;i=i+1)
	{
		if(a[i]>64&&a[i]<91)
			a[i]=a[i]+32;
		if(b[i]>64&&b[i]<91)
			b[i]=b[i]+32;
	}
	for(i=0;i<80;i=i+1)
	{
		if(a[i]-b[i]==0)
		{
			if(a[i]!='\0')
			    continue;
			else
			{
				cout<<'='<<endl;
				break;
			}
		}
		else if(a[i]>b[i])
		{
			cout<<'>'<<endl;
			break;
		}
		else
		{
			cout<<'<'<<endl;
			break;
		}

	}
	return 0;
}

