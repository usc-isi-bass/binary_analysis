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
{           int i,j,e; 
            char s[256];   
            char b[256]; 
            char a[256];
            gets(s); 
            gets(a);
            gets(b); 
            int c; 
            i=0;    
    for (i=0;s[i]!='\0';i++)
{   j=0;  c=0;  e=i;  
    if (s[i]==a[j])
{   
	for (;a[j]!='\0';j++,i++) 
	{    if (a[j]!=s[i])    
	{     
		c++;    
	}   
	}   
	if (c==0)
	{   
		for (j=0;a[j]!='\0';j++,e++)
		{
			s[e]=b[j];   
		}    
		break;   
	} 
} 
i=e;
}

printf("%s",s); 
return 0;
}
