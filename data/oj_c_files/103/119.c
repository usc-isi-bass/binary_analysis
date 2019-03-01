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
      char a[1001],c=1,i,n;
      gets(a);
      for(n=0;a[n]!='\0';n++)
      {
                               if(a[n]>='a'&&a[n]<='z')
                               a[n]+='A'-'a';
                               else
                               a[n]=a[n];
                               }
      for(i=0;a[i]!='\0';i++)
      {
                             if(a[i+1]==a[i])
                             c++;
                             else
                             {
                             printf("(%c,%d)",a[i],c);
                             c=1;
                             }
                             }
                             }
