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
	int i,(*p)[100],row,col,r,c,j;
    scanf("%d %d",&row,&col);
    p=(int(*)[100])calloc(100,100*sizeof(int));

    for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",*(p+i)+j);
    for (i=0;i<col;i++)
	{
		r=0;c=i;
		while(r<row&&c>=0)
		{printf("%d\n",*(*(p+r)+c));r++;c--;}
	}
	for (i=1;i<row;i++)
    {
		r=i;c=col-1;
		while(r<row&&c>=0)
		{
			printf("%d\n",*(*(p+r)+c));
			r++;c--;
		}
    }

	return 0;
}