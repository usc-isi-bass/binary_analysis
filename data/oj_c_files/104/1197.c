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
{  int x,y,a[100],b[100],i,j,ka,kb;
scanf("%d%d",&x,&y);
a[1]=x;
b[1]=y;
i=1;
j=1;
while(a[i]!=1)
{i++;
a[i]=a[i-1]/2;
}

while(b[j]!=1)
{j++;
b[j]=b[j-1]/2;
}
for(ka=1;ka<=i;ka++)
{for(kb=1;kb<=j;kb++)
{	 if (a[ka]==b[kb])
{       printf("%d\n",a[ka]);
        break;
}
if (a[ka]==b[kb]) break;
}
if (a[ka]==b[kb]) break;
}


	return 0;
}