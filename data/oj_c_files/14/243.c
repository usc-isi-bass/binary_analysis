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

struct xue
{
	int ID;
	int sx;
	int yw;
	int sum;
}xueshen;

int main()
{
	int n,i,k;
	scanf("%d",&n);
	struct xue *xuesheng;
    xuesheng=(struct xue*)malloc(4*sizeof(int)*n);
	for (i=0;i<n;i++){
		scanf("%d%d%d",&xuesheng[i].ID,&xuesheng[i].sx,&xuesheng[i].yw);
		xuesheng[i].sum=xuesheng[i].sx+xuesheng[i].yw;
	}
	for (i=1;i<4;i++){
		for(k=0;k<n-i;k++){
			if(xuesheng[k].sum>=xuesheng[k+1].sum){
				xueshen=xuesheng[k+1];
				xuesheng[k+1]=xuesheng[k];
				xuesheng[k]=xueshen;
			}
		}
	}
	for (i=1;i<4;i++){
		printf("%d %d\n",xuesheng[n-i].ID,xuesheng[n-i].sum);
	}
	return 0;
}

