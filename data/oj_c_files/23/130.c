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
{ char str[101];
int num[100]={0};
gets(str);
 int i,j,n=0,m;
 for(i=0;str[i]!='\0';i++)
 {if(str[i]==32) n++;}
 if(n==0) puts(str);
 else {n=strlen(str);
		for(i=n-1;i>=0;i--)
		{if(str[i]==32) 
			{   m=i; 
				for(j=i+1;str[j]!=32&&str[j]!='\0';j++)
				{printf("%c",str[j]);}
				printf(" ");
			}
		}
	for(i=0;str[i]!=32;i++)
	{printf("%c",str[i]);}
 }
 }