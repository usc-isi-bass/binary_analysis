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
     char str[11],substr[4],string[14],*p;
	 int i,index;
     while(scanf("%s%s",str,substr)!=EOF)
	 {
		 p=str;
		 for(i=1;str[i];i++)
		 
			 if(str[i]>*p)
			 {
				 index=i;
				 p=&str[i];
			 }
		     string[0]='\0';
			 strncat(string,str,index+1);
			 strcat(string,substr);
			 strcat(string,p+1);
			 printf("%s\n",string);
	 }
return 0;
}
			 
			




