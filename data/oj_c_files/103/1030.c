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
      char a[1000],c[100];
      int i=0,j=1,k=0,l=0,d,b[100];
      scanf("%s",a);
     
      while(a[i]!='\0')
      {
      if(a[i]>'Z')
      a[i]=a[i]-'a'+'A';
      i++;                     
      }
      c[0]=a[0];
      b[0]=1;
      while(a[j]!='\0')
      {
      if(a[j]==a[j-1])
      b[k]++;
      else
      {
      l++;
      k++;
      c[l]=a[j];
      b[k]=1;
      }
      j++;
      }
      for(d=0;d<=k;d++)
      printf("(%c,%d)",c[d],b[d]);
      }