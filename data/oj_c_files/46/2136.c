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
	int a[100][100];
	int rowm,coln,i,j,row,col;
	rowm=1;
	coln=0;
	scanf("%d %d",&row,&col);
	for(i=1;i<=row;i++)
		for(j=1;j<=col;j++)
			scanf("%d",&a[i][j]);
		i=1;j=0;
	while(1){	
		if(coln>=col) break;
		for(i=rowm,j++;j<=col;j++) 
			printf("%d\n",a[i][j]);
		coln++;
		if(rowm>=row) break;
		for(j=col,i++;i<=row;i++)
			printf("%d\n",a[i][j]);
		rowm++;
		if(coln>=col) break;
		for(i=row,j--;j>=coln;j--)
			printf("%d\n",a[i][j]);
		col--;
		if(rowm>=row) break;
		for(j=coln,i--;i>=rowm;i--)
			printf("%d\n",a[i][j]);
		row--;		
	}
}