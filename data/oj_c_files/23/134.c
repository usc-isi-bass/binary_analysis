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

main()
{
	char a[500],b[500];
	int i,la,k=0,j;
	gets(a);
	la=strlen(a);
	for(i=0;i<la;i++)
	{
		if(a[i]!=' ') k=k+1;
		else 
		{
		    for(j=i-k;j<i;j++)
			   b[la+j+k-2*i]=a[j];
			b[la-i-1]=' ';
			k=0;
		}
	}
	for(j=i-k;j<i;j++)
		b[la+j+k-2*i]=a[j];
	b[la]='\0';	
    puts(b);
}