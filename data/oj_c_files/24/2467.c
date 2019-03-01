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

int main(void)
{
	char str[2000],max[2000],min[2000];
	gets(str);
	char *p,*pM;
	int mi=strlen(str)+1,ma=0;
	p=str;pM=str;
	for(;;pM++)
	{
		if(*pM==' '||*pM==',')
		{
			*pM='\0';
			if(pM-p)
			{
				if(pM-p>ma) {strcpy(max,p);ma=pM-p;}
				if(pM-p<mi) {strcpy(min,p);mi=pM-p;}
			} 
			p=pM+1;
		}
		else if(*pM=='\0')
		{
			if(pM-p)
			{
				if(pM-p>ma) {strcpy(max,p);ma=pM-p;}
				if(pM-p<mi) {strcpy(min,p);mi=pM-p;}
			}
			break;
		}
	}
	puts(max);
	puts(min);
	return 0;
} 