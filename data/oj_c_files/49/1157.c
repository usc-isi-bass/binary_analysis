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
	char s[501]="",temp[501]={""},temp1[501]={""};
	int i=0,j=0,r=0,p=0,q=0,num;

	gets(s);
    num=strlen(s);

	for(i=2;i<=num;i++)
		for(j=0;j<=strlen(s)-i;j++)
		{
			p=j;
			for(r=0;r<i;r++)
			{
				temp[r]=s[p];
			    p++;
			}
           for(q=0;q<i;q++)
		   {
			   temp1[q]=temp[i-q-1];
		   }
			if(strcmp(temp1,temp)==0)
		   printf("%s\n",temp);
			
		}
}