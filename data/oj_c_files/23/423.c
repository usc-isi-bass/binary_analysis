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
char str[102],re[102];                                                          //re????????????? 
cin.get(str,100);
int len,i,j,m;
len=strlen(str);
m=0;
for(i=len-1;i>=0;i--)
    {
	if(str[i]==' ')
        {for(j=i+1;j<len;j++)
           {
	       re[m]=str[j];                                                              //?????????????????????re?? 
		   m++;}
         re[m]=' ';
         m++;
	     len=i;
		 }
	if(i==0)
	   for(j=0;j<len;j++)
	      {
           re[m]=str[j];                                                          //????????????????re?? 
		   m++;
		   }	
   }
for(i=0;i<strlen(str);i++)
    cout<<re[i];                                                                  //?? 
return 0;
}