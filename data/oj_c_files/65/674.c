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

int main ()
{
	int i,a[max],b[max],m=0,q=0,n;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d %d",&(a[i]),&(b[i]));}
for(i=0;i<n;i++)
{if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0))
{m++;
}
else
{if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0))
{q++;
}
else
{m++;
q++;
}
}}
if(m>q)
{printf("A\n");
}
else
{if(m==q)
{printf("Tie\n");
}
else
{printf("B\n");
}
}return 0;
}