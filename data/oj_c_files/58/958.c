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

int main ()
{
	int i,j,n,len;
	char s[81];
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		int flag=0;
		gets(s);
        len=strlen(s);
		for(j=0;j<len;j++)
		{
			if(j==0)
			{
			   if(s[j]=='_'||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z'))
			      flag=1;
               else
		   	   {
               	   printf("%d\n",flag);
               	   break;
               }
			}
            else
			 {
			     if(s[j]=='_'||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'))
                 flag=1;
				 else
			 	 {
 					flag=0;
 					printf("%d\n",flag);
 					break;
 				 }			     	   
			 }
		 if(j==len-1)
           printf("%d\n",flag);
		}
	}
}