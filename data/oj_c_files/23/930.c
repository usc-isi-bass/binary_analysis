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
     char a[110];
	 int i,k,len,m=0,b[100];
     gets(a);
     len=strlen(a);
	 for(i=0;i<len-1;i++)
	 {
		 if(a[i]==' ')
		 {	 b[m]=i;
		     m++;
		 }
	 }
	 for(k=m-1;k>=0;k--)
	 { for(i=b[k]+1;a[i]!=' '&&a[i]!='\0';i++)
			 printf("%c",a[i]);
	 printf(" ");
	 }
	 i=0;
	 while(a[i]!=' '&&a[i]!='\0')
	 { printf("%c",a[i]);
	   i++;
	 }
}
