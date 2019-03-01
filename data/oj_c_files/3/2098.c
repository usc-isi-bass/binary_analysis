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
	int n,i,k;
	int a[1000]={0};
	int b[10000]={0};
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
       {scanf("%d",&a[i]);
        b[a[i]]=1;
	   }
    for(i=1;i<=n;i++)
       if(b[k-a[i]]==1&&k-a[i]>0){printf("yes");return 0;}
    printf("no");
	return 0;
}