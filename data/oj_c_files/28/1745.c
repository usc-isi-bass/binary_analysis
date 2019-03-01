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
 char str[6000],words[M][N];
  int len,i=0,j=0,k=0,p;
 gets(str);
 len=strlen(str);
 while(i<len)
 {
  if(str[i]!=' ')
  {
   for(j=i;str[j]!=' '&&j<len;j++)
   {
    words[k][j-i]=str[j];
   }
   words[k][j-i]='\0';
   k++;
   i=j+1;
  }
  else
   i++;
 }
   p=k;
    printf("%d",len=strlen(words[0]));
 for(k=1;k<p;k++)
  printf(",%d",len=strlen(words[k]));
 return 0;
}

