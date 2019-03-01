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

void main()
{
	char s1[51],s2[51];
	char *p1,*p2;
	int a,n;
	a=0;
	scanf("%s",s1);
	scanf("%s",s2);
	n=strlen(s1);
	for(p2=s2;(*p2)!='\0';p2++)
	{
		for(p1=s1;(*p1)!='\0';p1++)
		{
			if((*p1)==(*p2))
			{
				p2++;
				a=p2-s2-n;
			}
			else
			{
				break;
			}
			
		}
		if(a!=0)
		{
			break;
		}
		
	}
	printf("%d",a);

}
