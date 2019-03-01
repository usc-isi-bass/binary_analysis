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
int n,j,k,l,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
char x[100],y[100];
scanf("%s",x);j=strlen(x);
scanf("%s",y);k=strlen(y);
for(l=k-1;l>=0;l--){x[j-k+l]=x[j-k+l]-y[l]+48;if(x[j-k+l]<48){x[j-k+l]+=10;x[j-k+l-1]--;}}
printf("%s",x);printf("\n");
}
}