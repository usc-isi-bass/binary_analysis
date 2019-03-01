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

int main(void)
{
	int n,MEDIA=0;scanf("%d",&n);
	int NUMO[n];int k=0;
	for(int i=0;i<=n;i++)
	{
		scanf("%d",&MEDIA);
		for(int j=0;j<k;j++)
		{
			if(NUMO[j]==MEDIA) goto SPEEEE;
		}
		NUMO[k]=MEDIA;
		k++;
		SPEEEE: ;
	}
	for(int i=0;i<k-1;i++)
	printf("%d,",NUMO[i]);
	printf("%d",NUMO[k-1]);
}