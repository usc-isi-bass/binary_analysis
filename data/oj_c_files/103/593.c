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
    char str[1000];
int i,X,s=0,j,n[26]={0};
scanf("%s",str);
X=strlen(str);
for (i=0;i<X;i++)
{
    if (('a'<=str[i])&&(str[i]<='z'))
{str[i]=str[i]-'a'+'A';}
}  
for (i=0;i<X;i++)
{
  s=s+1;
  if (str[i+1]!=str[i])
  {
                       printf("(%c,%d)",str[i],s);
                             s=0;
                             } 
      
}


}