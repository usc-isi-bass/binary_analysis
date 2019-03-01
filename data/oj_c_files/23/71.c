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
char str[101];
int q[102],b,c,i,j=0,k,m,x=0;

gets(str);

for(i=0;str[i]!='\0';i++)

{
  if(str[i]==' ')
q[j]=i,j++,x++;
  else
  if(str[i+1]=='\0')
   b=i;}

if(j==0)
 {for(m=0;str[m]!=' '&&str[m]!='\0';m++)
 printf("%c",str[m]);}
else
{for(;j>0;j--)
   {
   for(m=q[j-1]+1;str[m]!=' '&&str[m]!='\0';m++)
  {printf("%c",str[m]);
   if(str[m+1]==' '||str[m+1]=='\0')
   printf(" ");}
  }
for(m=0;str[m]!=' '&&str[m]!='\0';m++)
printf("%c",str[m]);
 }
}

