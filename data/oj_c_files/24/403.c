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


main()
{
	char str[1000],*p,*p1,*p2,*p3;
	int len,max=0,min=100;
	gets(str);
	for(p1=p=str;*p!='\0';p++)
	{
		if(*p==' ') 
		{
			*p='\0';
			len=strlen(p1);
			if(len<min)   {min=len;p2=p1;}
			if(len>max) {max=len; p3=p1;}
			p1=p+1;
		}
	}
		len=strlen(p1);
			if(len<min)   {min=len;p2=p1;}
			if(len>max) {max=len; p3=p1;}

	puts(p3);
	puts(p2);
}
