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
int x1,y1,x2,y2,i,j,k,c;
int A[100][100]={0};
int B[100][100]={0};
scanf("%d%d",&x1,&y1);
for(i=0;i<x1;i++)
for(j=0;j<y1;j++)
{
scanf("%d",&A[i][j]);
}

scanf("%d%d",&x2,&y2);
for(i=0;i<x2;i++)
for(j=0;j<y2;j++)
{
scanf("%d",&B[i][j]);
}

for(i=0;i<x1;i++)
for(j=0;j<y2;j++)
{
 c=0;
 for(k=0;k<x2;k++)
 c =c + A[i][k]*B[k][j];
 if(j<y2-1)
 printf("%d ",c);
 if(j==y2-1)
 printf("%d\n",c);
}


}