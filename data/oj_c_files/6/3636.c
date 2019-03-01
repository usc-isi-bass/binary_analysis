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
	int p,i,j,k,m,n;
	int sum=0;
    scanf("%d",&p);
	int sz[100][100];
	for(i=0;i<p;i++){
        scanf("%d %d",&m,&n);
		for(j=0;j<m;j++){
			for(k=0;k<n;k++){
				scanf("%d",&sz[j][k]);
				if(j==0||j==(m-1))
					sum+=sz[j][k];
				else if(j!=0&&j!=(m-1)&&k==0)
						sum+=sz[j][k];
				else if(j!=0&&j!=(m-1)&&k==(n-1))
						sum+=sz[j][k];
			}
		}
		printf("%d\n",sum);
		sum=0;
	}
					
	return 0;
}