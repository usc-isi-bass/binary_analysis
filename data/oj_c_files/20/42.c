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

void main(){
	char a[15];
	char str[15],substr[3];
	int i=0,max,n,k;

	for(;;)
	{i=0;
       if((a[0]=getchar())==EOF)
		   exit(-1);
	   gets(&a[1]);
	   while(a[i]!=' ')
	   { str[i]=a[i];i=i+1;
	   }
	   str[i]='\0';
	   substr[0]=a[i+1];
	   substr[1]=a[i+2];
	   substr[2]=a[i+3];

	   max=0;n=strlen(str);
		for(k=1;k<=n-1;k++)
		{
			if(str[k]>str[max]) max=k;
		}
		for(k=n-1;k>=max+1;k=k-1)
			str[k+3]=str[k];
		str[max+1]=substr[0];
	    str[max+2]=substr[1];
	    str[max+3]=substr[2];
		str[n+3]='\0';
printf("%s\n",str);
	}
}

