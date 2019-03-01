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
	int i,n,t[27],max;
	char p,a[100][27],b[100][27];
	scanf("%d",&n);
	for(i=1;i<=26;i++) t[i]=0;
	for(i=1;i<=n;i++) scanf("%s%s",a[i],b[i]);
	for(p='A';p<='Z';p++)
		for(i=1;i<=n;i++)
			if(strchr(b[i],p)) t[p-'A'+1]++;
	max=1;
	for(i=2;i<=26;i++)
		if(t[max]<t[i]) max=i;
	printf("%c\n",p='A'+max-1);
    printf("%d\n",t[p-'A'+1]);
	for(i=1;i<=n;i++)
		if(strchr(b[i],p)) printf("%s\n",a[i]);
}





