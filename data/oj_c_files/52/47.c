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
	int n,m,i;
	int s[30];
	int *p,end;
	scanf("%d%d\n",&n,&m);
m=m%n;
if(m!=0)
{
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
loop:
	end=*(s+n-1);
	for(p=s+n-1;p>s;p--)
		*p=*(p-1);
	    *s=end;
		m--;
	if(m>0) goto loop;

    printf("%d",s[0]);
	for(i=1;i<n;i++)
	{
		printf(" %d",s[i]);
	}
}

else if(n==m||m==0)
{
    printf("%d",s[0]);
	for(i=1;i<n;i++)
	{
		printf(" %d",s[i]);
	}
}
	return 0;
}
