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
int n,a[200],b[200],result=0,i,j,k;
scanf("%d",&n);
for(i=0;i<n;i++)
        {
        scanf("%d%d",&a[i],&b[i]);
        }
for(i=0;i<n;i++)
        {
        if(a[i]-b[i]==-1||a[i]-b[i]==2) result=result+1;
        else if(a[i]-b[i]==1||a[i]-b[i]==-2) result--;
        }
if(result>0) printf("A");
if(result<0) printf("B");
if(result==0) printf("Tie");
}
