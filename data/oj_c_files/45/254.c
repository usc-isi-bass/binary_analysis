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
char ch1[50],ch2[50];
int len1,len2,i,j,k,c,d;
scanf("%s",&ch1);
scanf("%s",&ch2);
len1=strlen(ch1);
len2=strlen(ch2);

for(i=0;i<len2;i++)
{
	k=1;
	j=0;
do
{       c=(int)ch1[j];
		d=(int)ch2[i+j];
       
		if(c==d)k=1;
		else k=0;
	    j++;
		if(j>=len1)break;
}
		while(k==1);

		if(k!=0)
		{
			printf("%d\n",i);
			break;
		}
}
}