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
{
  int a[105]={0},b[105]={0},d[105]={0};
  int i,j,k,n;
  char c[105]="";
  scanf("%d\n",&n);
  for (i=1;i<=n;i++)
  {
    gets(c);
    k=strlen(c);
    for (j=0;j<k;j++)
      a[j]=c[k-j-1]-'0';
    for (j=k;j<105;j++) a[j]=0;
    gets(c);
    k=strlen(c);
    for (j=0;j<k;j++)
      b[j]=c[k-j-1]-'0';
    for (j=k;j<105;j++) b[j]=0;
    //printf("%d %d%d%d%d%s ",k,b[1],b[2],b[3],b[4],c);
    gets(c);
    for (j=0;j<=102;j++) d[j]=0;
    for (j=0;j<=102;j++)
      {
        d[j]=d[j]+a[j]-b[j];
        if (d[j]<0) {d[j]=d[j]+10;d[j+1]=d[j+1]-1;}
        //k=j,k=d[j];
      }
    j=101;
    while (d[j]==0) {j--;}
    while (j>=0) {printf("%d",d[j]); j--;}
    printf("\n");
  } 
}
