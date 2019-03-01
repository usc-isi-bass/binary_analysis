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
     char *str;
	 int i=0;
     str=(char*)calloc(100,sizeof(char));
     gets(str);
     while(*(str+i)!='\0')
	 {	 
		 if((*(str+i)<=57&&*(str+i)>=48)&&(*(str+i+1)>57||*(str+i+1)<48))
			 printf("%c\n",*(str+i));
		 if((*(str+i)<=57&&*(str+i)>=48)&&(*(str+i+1)<=57&&*(str+i+1)>=48))
			 printf("%c",*(str+i));
		 i=i+1;
	 }
}
