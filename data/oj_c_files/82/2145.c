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
    int i,n[1000],m[1000],k,a,s,p;
	scanf("%d",&k);
	int d[1000]={0};
	for (i=0,a=0;i<k;i++){
		scanf ("%d%d",&m[i],&n[i]);
		if (m[i]>=90&&m[i]<=140&&n[i]<=90&&n[i]>=60){
           d[a]++;
		}
		else {
			a++;
		}
		p=a;
	}
	for (i=p;i>0;i--){
		if (d[i]>d[i-1])
		{
			s=d[i];
			d[i]=d[i-1];
			d[i-1]=s;
		}
	}
	printf ("%d",d[0]);

	return 0;
}