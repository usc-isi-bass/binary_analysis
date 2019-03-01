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
      int n;
      scanf("%d",&n);
      for(int j=0;j<n;j++)
      {
              char a[500],b[500];
              scanf("%s",a);
              int len=strlen(a);
              for(int i=0;i<len;i++)
              {
                      if(a[i]=='A') b[i]='T';
                      if(a[i]=='T') b[i]='A';
                      if(a[i]=='G') b[i]='C';
                      if(a[i]=='C') b[i]='G';
              }
              b[len]='\0';
              printf("%s\n",b);
      }
}