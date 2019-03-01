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
	char *str;int *a;
	str=(char*)malloc(30*sizeof(char));
	a=(int*)malloc(30*sizeof(int));

	gets(str);
	int i;
	for(i=0;i<strlen(str);i++) 
	{
		*(a+i)=*(str+i);
		
	}
			for(i=0;i<strlen(str);i++) 
	       if(*(a+i)>=48&&*(a+i)<=57)
		{
			
		printf("%c",*(str+i));
		
		if(1-(*(a+i+1)<=57&&*(a+i+1)>=48))
			printf("\n");
		}

}