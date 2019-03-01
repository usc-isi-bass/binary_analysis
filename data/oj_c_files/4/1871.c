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
{	int a[num][num];
	int row,col;
	int i,j;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	for(j=0;j<col;j++)
	{
		if(j<row)//?????row??col???????col???0??
		{	for(i=0;i<=j;i++) 
				printf("%d\n",a[i][j-i]);		
		}
		
		else//col>row?????????row?????col++???
		{	for(i=0;i<row;i++) 
				printf("%d\n",a[i][j-i]);	
		}
	}
	
	for(j=col;j<col+row-1;j++)//??????a[row-1][col-1]??j???
	{	for(i=j-col+1;j-i>=0;i++)//??????col????1??????????j++???i??????
		{	if(i<row)
				printf("%d\n",a[i][j-i]);}
	}
	return 0;
}