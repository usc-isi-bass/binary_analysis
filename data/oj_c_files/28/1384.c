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
char a[1000],b[300][100];
int i,m=0,n=0;
gets(a);
for(i=0;i<strlen(a);i++)
{
  if(n==0&&a[i]==' ')
  continue;
  if(a[i]==' ') 
  {
   b[m][n]='\0';
   m++;
   n=0;          
             }
  else
  {
      b[m][n]=a[i];
      n++;
  }                       
}
b[m][n]='\0';
for(i=0;i<m;i++)
printf("%d,",strlen(b[i]));
printf("%d",strlen(b[i]));

return 0;    
}
