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
    char a[1001];
    scanf("%s",a);
    int i;
    int k=1;
    for(i=0;a[i]!='\0';i++)
    {
      if((a[i]>='a')&&(a[i]<='z'))
      {
        a[i]=a[i]-'a'+'A';
      }
    }
    for(i=0;a[i]!='\0';i++)
    {
      if(a[i]==a[i+1])
      {
        k=k+1;
        continue;
      }
      else
      {
        printf("(%c,%d)",a[i],k);
        k=1;
      }
    }
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
}