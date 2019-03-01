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
	int la,lb,i;

    char s[80];
	char a[80];
    gets(s);
	gets(a);
    la=strlen(s);
	lb=strlen(a);
	for(i=0;i<la;i++)
     {
	 if(s[i]<='z' && s[i]>='a') 
        s[i]-=32; 
    } 
    for(i=0;i<lb;i++)
     {
	 if(a[i]<='z' && a[i]>='a') 
        a[i]-=32; 
    } 
    for(i=0;i<=80;i++)
	{
		if(s[i]>a[i])
		{
	       printf(">"); break;
		}
	         if(s[i]<a[i])
			 {
	           printf("<");break;
			 }
	          if(s[i]==a[i]&&la==lb&&i==la)
	           
				  printf("=\n");
			  if(i==la)break;
	}
	
}

