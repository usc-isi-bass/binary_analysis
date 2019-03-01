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
       char a[1000];
       int n,i,j,count;
       gets(a);
       n=strlen(a);
       for(i=0;i<n;i++)
       {
         if(a[i]<='z'&&a[i]>='a')
           a[i]=a[i]-'a'+'A';
           }
           i=0;
           for(;i<n;)
         {
           count=1;
           for(j=i+1;;j++)
           if(a[j]==a[i])
           count++;
           else
           {
               printf("(%c,%d)",a[i],count);
           i=j;
           break;
           }
           }
           getchar();
           getchar();
}
                           