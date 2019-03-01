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
	char a[80],b[80];
	int i;
	gets(a);
	gets(b);
	for(i=0;i<=79;i++)
	{
		if(a[i]>90)
			a[i]=a[i]-32;
		if(b[i]>90)
			b[i]=b[i]-32;
		if(a[i]==b[i])
		{
			if(a[i]=='\0')
			{cout<<"=";break;}
			else continue;
		}
		else if(a[i]>b[i])
		{

cout<<">";break;
		}
		else
		{

	cout<<"<";break;
		}
	
	}
	return 0;
}
		
