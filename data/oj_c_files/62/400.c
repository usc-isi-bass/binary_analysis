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
	int n,i,j=0,k,len,sum=0;
	char a[300],b[300];
        gets(a);
        len=strlen(a);
     for(i=0;i<len;i++)
	 {
           if(a[i]!=' '||a[i]==' '&&a[i+1]!=' ')
		   {  
			   b[j]=a[i];
			   j++;
		   }
		   else if(a[i]==' '&&a[i+1]==' ')
		    continue;
	}

	    b[j]='\0';
			printf("%s",b);
	return 0;
}