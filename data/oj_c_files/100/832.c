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
    int n,i,b[255],k=0;
    char a[301];
    gets(a);
    for(i=97;i<123;i++)
    {
         b[i]=0;
    }
    n=strlen(a);
    for(i=0;i<n;i++)
    {
         if(97<=a[i]&&122>=a[i])
         {
              b[(int)a[i]]++;
         }
    }
    for(i=97;i<123;i++)
    {
         if(b[i]!=0)
         {
              printf("%c=%d\n",(char)i,b[i]);
              k++;
         }
    }
    if(k==0)
    {
         printf("No\n");
    }
    return 0;
} 