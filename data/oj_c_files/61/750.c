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



int main(){
	int a=0,b=0,c=1,m,n;
	int x,y,z;
	int result=0;
	int sz[LEN];
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&(sz[i]));
        for(int j=1;j<=sz[i];j++)
		{
			b=a+c;
		c=a;
		a=b;
        result=b;
		}
		printf("%d\n",result);
		a=0;
		b=0;
		c=1;
	}
	return 0;
}
	



