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
  int n,i,l,j,k;
  char a[100000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {int count=0;
   scanf("%s",a);
   l=strlen(a);
   for(j=0;j<l-1;j++)
   {
     for(k=0;k<l;k++)
     {if(a[j]==a[k]&&j!=k)
       break;
        }
     if(k==l)
     {count++;
      if(count==1)
      printf("%c\n",a[j]);}
   }
   if(count==0)
   printf("no\n");
}
   getchar();
   getchar();
   getchar();
}
