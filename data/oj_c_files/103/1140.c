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
	int i,k,len;
	char s[1001],c;

	gets(s);

	len=strlen(s);

	

	for(i=0;i<len;i++)
	{ 
		k=1;
		c=s[i];
		if((c>=97)&&(c<=122))
			c=c-32;
        
		while((s[i+1]==c)||(s[i+1]==c+32))
		{i++;
		k++;}
        
		printf("(%c,%d)",c,k);

	}
	return 0;
}
