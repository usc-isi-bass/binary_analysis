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
 int t,i,j,k,l,p,q;
 char s[100][100];
 scanf("%d",&t);
 for(k=0;k<t;k++)
  scanf("%s",s[k]);
 for(k=0;k<t;k++)
 {
  l=strlen(s[k]);
  for(i=0;i<l;i++)
  {
   q=0;
   for(j=0;j<l;j++)
   {
    p=0;
    if(s[k][i]==s[k][j]&&j!=i)
    {
     p=1;
     break;                    
    }            
   }
   if(p==0)
    {
     printf("%c\n",s[k][i]);
     q=1;
     break;        
    }                     
  }            
  if(q==0)
    printf("no\n");    
 } 
 getchar();
 getchar();
 return 0;               
}
