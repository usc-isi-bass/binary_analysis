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

void func(char* a)
{
	int lena=strlen(a),i,flag=0;
	for(i=0;i<lena;i++)
	{
		if(flag==0)
          a[i]=a[i]+a[i]-'0';
		else 
		  a[i]=a[i]+a[i]+1-'0';
        if(a[i]>'9')
          {
          	a[i]-=10; flag=1;
          }
        else flag=0;       
	}
	if(flag==1)
	 { 
	  a[i]='1';
	  a[i+1]='\0';
	 }
}
int main()
{
   char a[N];
   int n,i,len;
   a[0]='1';
   a[1]='\0';
   scanf("%d",&n);
   for(i=0;i<n;i++)
   func(a);
   len=strlen(a);
   for(i=len-1;i>=0;i--)
   printf("%c",a[i]);	
}