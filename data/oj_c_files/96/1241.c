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
      char a[100];
      scanf("%s",a);
      char b[100]={0};
      int i,n,c,d;
      n=strlen(a);
      if(n==1)
         printf("0\n%c\n",a[0]);
      else if(n==2&&(a[0]-'0')*10+a[1]-'0'<13)
         printf("0\n%c%c\n",a[0],a[1]);
      else
      {
      c=(a[0]-'0')*10+(a[1]-'0');
      b[0]='0';
      for(i=1;i<n;i++)
      {
          b[i]=c/13+'0';
          d=c-c/13*13;
          if(a[i+1]=='\0')
              break;
          else 
              c=10*d+a[i+1]-'0';
      }
      
      int j,k;
      for(j=0;j<n;j++)
      {
          if(b[j]!='0')
             break;
      }
      for(k=j;k<n;k++)
         printf("%c",b[k]);
      printf("\n");
      printf("%d\n",d);
      }
      }
