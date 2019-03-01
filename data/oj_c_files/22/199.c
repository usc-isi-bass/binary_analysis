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
	int n=0;
	unsigned a[300]={0},max;
	int i=0;
	char b[10000]={'\0'};
	gets(b);
	while(b[i]){
		if(b[i]==',')
			n++;
		else
			a[n]=a[n]*10+b[i]-'0';
		i++;
	}
	
	max=0;
	for(i=0;i<=n;i++)
		if(a[i]>max) max=a[i];
	for(i=0;i<=n;i++)
		if(a[i]==max) a[i]=0;
	max=0;
	for(i=0;i<=n;i++)
		if(a[i]>max) max=a[i];
	if(max==0) printf("No");
	else printf("%u",max);

}

		

