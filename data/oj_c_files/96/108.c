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
  char c[100];
  char s[100];
  int a[100];       
  scanf("%s",c);
  int i;
  for(i=0;i<100;i++)
  {
   if(c[i]!='\0')
   a[i]=c[i]-'0';
   else if(c[i]=='\0')
   break;
  }
  int d=0;
  int j;
  int k=0;
  for(j=0;j<i;j++)
  {
    d=a[j]+d*10;
    if(d>=13)
    {
     s[k]=d/13+'0';
     k++;
     d=d%13;
    } 
    else if(k!=0)
     {
         s[k]='0';
         k++;
     }
  }
   s[k]='\0';
   if(i==1)
  { 
       s[0]='0';
       s[1]='\0';
       d=a[0];
       }
  else if((i==2)&&(a[0]*10+a[1]<13))
  {
       s[0]='0';
       s[1]='\0';
       d=a[0]*10+a[1];
       
       }
   printf("%s\n",s);
   printf("%d\n",d);
   }
