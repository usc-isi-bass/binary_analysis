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

int ways(int apple,int plate)
{
	int waynumber;
	if(plate==1||apple==1||apple==0) 
		waynumber=1;
	else if(apple<plate)
		waynumber=ways(apple,apple);
	else waynumber=ways(apple,plate-1)+ways(apple-plate,plate);
	return waynumber;
}
int main()
{
	int applenumber[20],platenumber[20],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&applenumber[i],&platenumber[i]);
	for(i=0;i<n;i++)
		printf("%d\n",ways(applenumber[i],platenumber[i]));
	return 0;
}
