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
 char s[100],a[100],b[100];
 int i,j,l,m,e=0;
 char *str;
 
 memset(s,0,100);
 memset(a,0,100);


 scanf("%s",a);
 gets(s);

 l=strlen(a);
 m=strlen(s);
 str=s;

 for(i=0;i<=m-l;i++)
 {//???????
  e=0;
  for(j=0;j<l;j++)
  {
       if(s[i+j]!=a[j])
       {
        e++;
        break;
       }
  }
    //e???0,???a??

  if(e==0/* &&(i==0 ||s[i-1]==' ' )*/)
  {
   printf("%d",i-1);
   break;
  }

 }
 
 return 0;
}
