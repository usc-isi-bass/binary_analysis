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
    int i,j,n,a[100];char s[101];
    gets(s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
      if(s[i]==' '&&s[i+1]==' ')
      {
      for(j=i;j<n;j++) 
       s[j]=s[j+1];
        n--;
        s[n]='\0';
        i=0;
      }
      }
    puts(s);
    getchar();getchar();
}
