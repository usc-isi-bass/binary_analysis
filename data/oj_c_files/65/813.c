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
    int n,x,y;
	int a[201];
		int b[201];
    a[201]=0;
	b[201]=0;
	x=0;
	y=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	    if(a[i]+1==b[i]||a[i]-2==b[i])
			x++;
		else if(a[i]!=b[i])
			y++;}
	if(x>y)
		printf("A");
	else if(x<y)
		printf("B");
	else printf("Tie");
	return 0;

}
