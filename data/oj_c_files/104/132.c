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

void main()
{
	int x,y;
	int m=0,n=0;
	int i;
	int a[20]={0},b[20]={0};
	int xi=0;
	scanf("%d%d",&x,&y);

//*????//

	a[0]=x;
	b[0]=y;
	for(i=1;i<10;i++)
	{
		a[i]=x/2;
		b[i]=y/2;
		x=x/2;
		y=y/2;
	}
	for(i=0;a[i]!=0;i++)
		m++;
	for(i=0;b[i]!=0;i++)
		n++;

	for(i=1;a[m-i]==b[n-i];i++)
		xi=a[m-i];

	printf("%d\n",xi);
}
