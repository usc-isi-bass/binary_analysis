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


int number(int a[],int m)
{
	int i,j,s=0;
	for(i=1;i<=m;i++)
		for(j=1;j<=m;j++)
			if(a[i]==2*a[j])
				s++;
	return(s);
}

main()
{
	int a[17],b[100];
	int i,j=1;

	scanf("%d",&a[1]);
	while(a[1]!=-1){
		for(i=2;i<=16;i++){
			scanf("%d",&a[i]);
			if(a[i]==0) break;
		}
		i--;
		b[j]=number(a,i);
		scanf("%d",&a[1]);
		j++;
	}

	for(i=1;i<=j-1;i++)
		printf("%d\n",b[i]);
}