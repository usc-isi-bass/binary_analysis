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

main()
{
      int a,b,i,j,h,s,g,p,q,l;
      char n[100];
      int m[100];
      char z[100];
      scanf("%d %s %d",&a,n,&b);
      l=strlen(n) ;
      h=0;
  for(i=1,g=1,s=0;i<=l;i++)
  {  if(n[l-i]>='a'&&n[l-i]<='z')
     h=n[l-i]-'a'+10;
     else 
     {if(n[l-i]>='A'&&n[l-i]<='Z')
     h=n[l-i]-'A'+10;
     else
     h=n[l-i]-'0';}
     s=s+h*g;
     g=g*a;     }
if(s==0) printf("0");
else
{
  for(j=0;s>0;j++)
  {  m[j]=s%b;
     s=s/b;  
     q=j;}
  for(p=0;p<=q;p++)
  {  if (m[p]>=0&&m[p]<=9)
      z[q-p]=m[p]+'0';
      else 
       z[q-p]=m[p]+'A'-10;          } 
    z[q+1]='\0';
     printf("%s",z);
     }

}
