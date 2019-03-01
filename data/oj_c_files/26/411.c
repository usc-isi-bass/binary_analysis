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

main()
{
   int i,j,k=0,l;
   char a[100],b[100];
   gets(a);
   l=strlen(a);
   for(i=0;i<l;i++)
   {
    if(a[i]!=' ')
   {b[k]=a[i];
   k++;}
    else
    {   j=i;
        b[k]=' ';
        k++;
        while(a[j]==' ')
     j++;
     i=j-1;
     }
     b[k+1]='\0';
     }
   puts(b);
   getchar();
   getchar();
   getchar();
}
