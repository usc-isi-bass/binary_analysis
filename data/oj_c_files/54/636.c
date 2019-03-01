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
{int a[100]={0};
	int func(int m,int n,int k);
	int i,n,k,t=0,flag=0;
	scanf("%d",&n);
	scanf("%d",&k);
	while(++t){a[1]=t*n+k;flag=1;
	for (i=2;i<=n;i++)
	{if ((a[i-1])%(n-1)==0)
	  a[i]=a[i-1]/(n-1)*n+k;
	if(a[i-1]%(n-1)!=0)
	{flag=0;break;
	}
	
    }if (flag==1) break;
	}

	printf("%d\n",a[n]);
	return 0;
}