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
 char s[100];
 gets(s);
 int i,j,l;
 l=strlen(s);
 for(i=0;i<l;i++)
 {
  if(s[i]==' '&&s[i+1]==' ')
  {
   for(j=i+1;j<l-1;j++)
   {
    s[j]=s[j+1];                  
   }
   l--;
   i--;           
  }               
 }
 for(i=0;i<l;i++)
  printf("%c",s[i]);
 getchar();
 getchar();
 return 0;    
}
