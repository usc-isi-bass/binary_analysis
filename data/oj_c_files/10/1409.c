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

unsigned int h[26],n;
int go(int maxh,int cp)
{
	int x,y,max;
	while(h[cp]>maxh)cp=cp+1;
	if(h[cp]==0)return 0;
	x=go(maxh,cp+1);
	maxh=h[cp];
	y=1+go(maxh,cp+1);
	max=(x>y)?x:y;
	return max;
}
int main()
{
	unsigned int i,c,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&h[i]);
	h[n]=0;
	t=go(65535,0);
	printf("%d",t);
	return 0;
}

