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

int main(){
	int i,c=0;
	double n,x=0,y=0;
	char a[600],b[600];
	scanf("%lf",&n);
	
		scanf("%s",a);
	
		scanf("%s",b);
	
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T'))
		{
			printf("error");
			c=1;
			break;
		}
		else
		{
			if(a[i]==b[i])
			{
			   x++;
			}
		}
		y++;
		
	}
	if(c==0)
	{
	if(b[i]!='\0')
	{
		printf("error");
		c=1;
	}
	}
	
	if(c==0)
	{
		if((x/y)>n)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}

	return 0;
}
