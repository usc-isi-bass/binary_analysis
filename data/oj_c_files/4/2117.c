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
	int row,col,i,j,k,n,m,a[100][100];
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(k=0;k<row+col-1;k++){
		for(m=0;m<row;m++){
			if((k-m)<0)
			{break;}
			for(n=k-m;;)
			{
				if((k-m)>(col-1))
				{break;}
				printf("%d\n",a[m][n]);
				break;
			}
		}
	}
	return 0;
}


