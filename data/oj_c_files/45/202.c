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
	int i,j,flag,l=0;
	char st[100],st1[100],st2[100];
	gets(st);
	for(i=0;st[i]!=' ';i++)
	{
		st1[i]=st[i];
        l++;
	}
	i++;	
	for(j=0;st[i]!='\0';j++,i++)
		st2[j]=st[i];
	for(i=0;;i++)
	{
		if(st2[i]==st1[0])
		{
			flag=1;
			for(j=0;j<l;j++)
				if(st2[i+j]!=st1[j])
				{
					flag=0;
					break;
				}
			if(flag) 
			{
				printf("%d\n",i);break;
			}
		}
	}
}