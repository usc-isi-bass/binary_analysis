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
	int i,len=0,tag=1,flag=1;
	char c[6000];
	gets(c);
	for(i=0;i<6000;i++)
	{
		if(c[i]!=' '&&c[i]!='\0')
		{
			tag=1;
			len++;
		}
		else if(c[i]==' ')
		{
			if(tag==1&&flag==1)
			{
				printf("%d",len);
				flag=0;
			}
			else if(tag==1&&flag==0) printf(",%d",len);
			else continue;
			tag=0;
			len=0;
		}
		else if(c[i]=='\0')
		{
			if(flag==0) printf(",%d",len);
			else if(flag==1) printf("%d",len);
			break;
		}
	}
}