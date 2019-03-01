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
	int i,j;
	char a[101];
	
	gets(a);
	for(i=strlen(a)-1;i>0;i--)
	{
		if(a[i]==' ')
		{
                      for(j=i+1;a[j]!=' '&&a[j]!='\0';j++)
		        printf("%c",a[j]);
		    if(j!=i+1)
		        printf(" ");
		}
          }
          for(j=i;a[j]!=' '&&a[j]!='\0';j++)
	     printf("%c",a[j]);
}