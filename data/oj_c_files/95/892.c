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
 int i,x=0,n1,n2,n;
 char a[80],b[80];
 gets(a);
 gets(b);
 n1=strlen(a);
 n2=strlen(b);
 if(n1<=n2) n=n2;
 else n=n1;/*??????????*/
 for(i=0;i<n;i++)
 {
 	if(a[i]>='a'&&a[i]<='z')
 		{a[i]=a[i]-32;}
	 if(b[i]>='a'&&b[i]<='z')
 	{b[i]=b[i]-32;}
 } /*????????????????????????????????
      ????????????????*/ 
 for(i=0;i<n;i++)
{ 
  if(a[i]==b[i])/*??||(a[i]==b[i]+32)||(b[i]==a[i]+32))*/
  x=x+1;
  else
  if(a[i]>b[i]) {printf(">");break;}
  else
  if(a[i]<b[i]) {printf("<"); break;}
}
 if(x==n)
 printf("=");
}
