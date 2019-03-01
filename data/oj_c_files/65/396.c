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
    int a[100],b[100],n,i,A=0,B=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d%d",&a[i],&b[i]);
if(a[i]-b[i]==0)continue;
else if(a[i]-b[i]==-1||a[i]-b[i]==2)A=A+1;
else B=B+1;
}
if(A>B)
printf("A");
if(A<B)
printf("B");
if(A==B)printf("Tie");
        return 0;
}
