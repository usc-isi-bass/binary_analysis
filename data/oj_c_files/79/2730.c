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
{int n=0,p,i,j,t,k;
int sl[301],cz[301];
for(i=0;i<301;i++)
	{scanf("%d%d",&(sl[i]),&(cz[i]));
		if(sl[i]==0){break;}
		n=n+1;
	}
	k=1;
for(t=0;t<n;t++){
	for(i=1;i<=sl[t];i++){
		k=(k+cz[t]-1)%i+1;}
	printf("%d\n",k);
	}
return 0;
}
