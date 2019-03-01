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
	int n,i,j,a[100]={0},b[100]={0},sum=0;

    scanf("%d",&n);

    for (i=1;i<=n;i++)

    scanf("%d",&a[i]);

    for (i=1;i<=n;i++)
	{
		b[i]=1;

    for (j=1;j<i;j++)

    if(a[j]>=a[i]&&b[j]+1>b[i])

     b[i]=b[j]+1;

    if (sum<b[i]) sum=b[i];
	
	}

    printf("%d\n",sum);

}
