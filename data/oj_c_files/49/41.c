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
	char a[100];
	int l,i,j,k,len,flag;
	scanf("%s",a);
	len=strlen(a);
	for (l=2;l<len;l+=2)
	{
		for(i=0;i<len;i++)
		{
			for(j=0;j<l/2;j++)
			{
				if(a[i+j]==a[i+l-1-j]) flag=1;
				else 
				{
					flag=0;
					break;}
			}
			if (flag==1)
			{
				for(k=i;k<i+l;k++)
					printf("%c",a[k]);
				printf("\n");
			}
		}
	}
}
	
	
	
	
	
	
	//	abcddcbaab