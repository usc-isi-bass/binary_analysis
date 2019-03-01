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
	int n,a[200],b[200],i,tempa=0,tempb=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0&&b[i]==1)
			tempa++;
		else if(a[i]==1&&b[i]==2)
			tempa++;
		else if(a[i]==2&&b[i]==0)
			tempa++;
		else if(a[i]==b[i])
		{
			tempa++;
		    tempb++;
		}
		else tempb++;
	}
	if(tempa>tempb)
		printf("A");
	if(tempa<tempb)
		printf("B");
	if(tempa==tempb)
		printf("Tie");

	
    
    return 0;
}