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
          int l,m,n,i,j,k;
          char a[100],b[100];
          scanf("%s",a);
          l=strlen(a);
          for(i=0;i<l-1;i++)
          {
                   m=(a[i]-'0')*10+a[i+1]-'0';
                   b[i]=m/13+'0';
                   a[i+1]=m%13+'0';
          }
          b[l-1]='\0';
          if(b[0]=='0'&&b[1]!='\0')
           for(j=0;j<i;j++)
             b[j]=b[j+1];
          if(l==1)
          {
                  b[0]='0';
                  b[1]='\0';
                  }
          puts(b);
          printf("%d",a[l-1]-'0');
          getchar();
          getchar();
 }