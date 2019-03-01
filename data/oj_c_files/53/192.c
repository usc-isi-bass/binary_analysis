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
int n,a[500]={0},i,u=0,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&t);
if(a[t]==0){if(u==0)printf("%d",t);else printf(",%d",t);++a[t];++u;}

}
}