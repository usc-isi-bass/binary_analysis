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
	char str1[50],str2[50],*p1,*p2;
	int t=0,j=0,k;
	scanf("%s %s",str1,str2);
	p1=str1;
	p2=str2;
	for(;*p2!='\0';)
	{
		
		for(;*p1!='\0';j++)
		{
			if(*p1==*p2&&*p1!='\0') {t=1;p1++;p2++;k=j-strlen(str1)+1;}
			else
			{
				p1=str1;
				if(t==0) p2++;
				t=0;
			}
		}
		if(t==1) {printf("%d",k);break;}
	}
}