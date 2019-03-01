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

void main()
{ int n,i,k,j;
  int t[100000];
  scanf("%d\n",&n);
  for (i=0;i<=(n-1);i++)
     scanf("%d",&t[i]);
  printf("\n");
  scanf("%d",&k);
  for (i=0;i<=(n-1);i++)
     if (t[i]==k) t[i]='a';
  if (n==1) {if (t[0]!='a') printf("%d",t[0]);}
  else
  {for (i=0;i<=(n-1);i++)
     { if (t[i]!='a')
       {printf("%d",t[i]);
        for (j=(i+1);j<=(n-1);j++)
        if (t[j]!='a') printf(" %d",t[j]);
        break;
        }
      }
   }
}