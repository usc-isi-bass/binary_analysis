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

swap(char *p,int n)
{
	char *q,*a;
    q=p-n+1;
	for(;p>=q;p--)
	{
		if((*p)==' ')
		{   
		   a=p;
		   if(a!=q)
		   {
			   for(p=p+1;*p!='\0';p++)
			   {
				  printf("%c",*p);
				  if(*(p+1)=='\0') 
				  {
					  printf(" ");
					  break;
				  }
				  else if((*p)==' ') break;
			   }
		       p=a-1;
		   }
		}
	}
     p=q;
	 for(;;p++)
	 { 
	   if((*p)==' '||*p=='\0') break;
       else printf("%c",*p); 
	 }
		return 0;
}
int main()
{
	char *p,str[1000];
	int len;
	gets(str);
	len=strlen(str);
	p=str+len-1;
	swap(p,len);
}