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
{   int a[500];
    int i,j,n,ans;
	for(;scanf("%d",&a[0]),a[0]!=-1;)
	{
		for(n=1;scanf("%d",&a[n]),a[n]!=0;n++);
		ans=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++) if (a[i]==a[j]*2) ans++;
		printf("%d\n",ans);
	}
	return 0;
}
	  
	
