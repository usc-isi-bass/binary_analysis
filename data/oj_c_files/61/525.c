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
	int l,m,n,k,i,j,p,q;
	int s[30]={0};
    scanf("%d",&n);
    s[1]=1;s[2]=1;
    for (i=3;i<=25;i++)
    s[i]=s[i-1]+s[i-2];
    for (i=1;i<=n;i++)
    {
        scanf("%d",&p);
        printf("%d\n",s[p]);
        }
 
return 0;
}
