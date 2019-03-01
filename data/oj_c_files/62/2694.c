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
    char a[100];
    gets(a);
    int l=strlen(a);
    for(int i=0;i<=l-1;i++)
    {
    	if((a[i]==' ')&&(a[i+1]==' ')) 
     	{   i++;
     	    while((a[i]==' ')&&(a[i+1]==' ')){i++;}
        	printf("%c",a[i]);
		}
     	else 
     	{
			printf("%c",a[i]);
		}
    }
    int y=0;
	scanf("%d",&y);
    return 0;
}
 
