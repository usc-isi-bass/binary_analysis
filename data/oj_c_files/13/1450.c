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
{int a[20001]={0},b[100]={0},n,i,j,m=1,flag=0;
scanf("%d",&n);
for(i=1;i<=n;i++) scanf("%d",&a[i]);
printf("%d",a[1]);b[1]=a[1];
for(i=2;i<=n;i++)
{flag=0;
	for(j=1;j<=m;j++) {if(a[i]==b[j]) flag=1;}
if(flag==1) continue;
else {m++;b[m]=a[i];printf(" %d",a[i]);}
}
printf("\n");
}