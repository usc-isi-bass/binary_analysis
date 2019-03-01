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
	char a[10000];
	int i,n,num=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{  if(a[i]!=' ')
		num=num+1;
		if(a[i]==' '&&a[i-1]!=' ')
		printf("%d,",num);
		if(a[i]==' '&&a[i+1]!=' ') 
	           num=0;
            	
            
	

		if(a[i+1]=='\0') printf("%d",num);
    }
}
	 

