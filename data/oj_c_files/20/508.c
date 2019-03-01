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
	char input[20];
	while(gets(input)!=NULL)
	{
		char a[15],b[5];
		sscanf(input,"%s %s",a,b);
		char* ptr=a;
		char* insert=a;
		char temp=*ptr;
		while(*(ptr)!='\0')
		{
			if(*(ptr)>temp)
			{
				temp=*(ptr);
				insert=ptr;
			}
			ptr++;
		}
		char* move=ptr+3;
		while(ptr!=insert)
		{
			*move=*ptr;
			move--;
			ptr--;
		}
		move=b;
		ptr++;
		while(*(move)!='\0')
		{
			*ptr=*move;
			move++;
			ptr++;
		}
		printf("%s\n",a);
	}
}