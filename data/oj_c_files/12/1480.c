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
{ int a[2000];
int i,m,n,k,lt;
k=0;
lt=0;
for (i=0;i<2000;i ++)
{cin>>a[i];
if (a[i]==-1)
	break;
if (a[i]==0)
	{for(m=lt;m<i;m++)
	   {for (n=lt;n<i;n++)
	     {if (a[m]==2*a[n])
{k++;}
}
}
            cout<<k<<endl;
	   k=0;
            lt=i+1;
}
}
return 0;
}