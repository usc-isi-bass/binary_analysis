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


main()
{
int n,i,c,a;
long T;
scanf("%d",&n);
T=0;

for(i=1;i<=n;i++)
{	 if (i>70) a=i-70;
		else a=70-i;
	c=i-7;
if (i%7!=0&&c%10!=0&&i/10!=7) T=T+i*i;

}
printf("%d\n",T);

return 0;
}