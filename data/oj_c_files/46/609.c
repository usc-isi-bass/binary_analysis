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
	int row,col,i,j,a[100][100],counter;
	scanf("%d %d",&row,&col);
	counter=row*col;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++) scanf("%d",&a[i][j]);
	}
	row-=1;col-=1;
	for(i=0;i<=row/2;i++)
	{
		for(j=i;j<=col-i;j++){
			printf("%d\n",a[i][j]);
			counter--;
			if(counter==0) goto end;
		}
		j--;
		for(i+=1;i<=row-(col-j);i++){
			printf("%d\n",a[i][j]);
			counter--;
			if(counter==0) goto end;
		}
		i--;
		for(j-=1;j>=row-i;j--){
			printf("%d\n",a[i][j]);
			counter--;
			if(counter==0) goto end;
		}
		j++;
		for(i-=1;i>j;i--){
			printf("%d\n",a[i][j]);
			counter--;
			if(counter==0) goto end;
		}
	}
    end:
	;
}