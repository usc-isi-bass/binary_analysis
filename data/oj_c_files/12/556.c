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




int main(int argc, char* argv[])
{ 
	int i,a[16],s=0,j;scanf("%d",&a[0]);
	while(a[0]!=-1)
	{
		for(i=1;i<=15;i++)
		{scanf("%d",&a[i]);
		if(a[i]==0)break;
		for(j=0;j<=i;j++)
			if(a[j]==2*a[i]||a[j]==0.5*a[i])s+=1;
		}printf("%d\n",s);
		s=0;
		scanf("%d",&a[0]);
	}


return 0;
}
