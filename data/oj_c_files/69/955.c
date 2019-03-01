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
	char a[300]={'\0'},b[300]={'\0'},*p;
	int i,bb[300]={0},aa[300]={0},len,lena,lenb,start;

		
	gets(a);
	gets(b);

	lena=strlen(a);
	lenb=strlen(b);

	len=lena>lenb?lena:lenb;
	
		for(p=a,i=lena-1;p<a+lena;p++,i--)
		{
			aa[i]=*p-'0';
		}

			for(p=b,i=lenb-1;p<b+lenb;p++,i--)
		{
			bb[i]=*p-'0';
		}

		
	for(i=0;i<len;i++)
	{
		bb[i]=aa[i]+bb[i];
	
	}

	for(i=0;i<=len;i++)
	{
		if(bb[i]>=10)
		{
			bb[i]-=10;
			bb[i+1]++;
		}
	}

	start=0;

	for(i=len;i>=0;i--)
	{
	
		if(start)
		{
			printf("%d",bb[i]);
		}
		else if(bb[i]!=0)
		{
			printf("%d",bb[i]);
			start=1;
		}
	}
	if(!start) printf("0");

}

