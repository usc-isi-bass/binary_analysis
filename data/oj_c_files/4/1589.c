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
{int row,col,*array,*p,i,j,t;
scanf("%d%d",&row,&col);
array=(int *)calloc(row,col*sizeof(int));
for(p=array;p<=array+row*col-1;p++)
scanf("%d",p);
for(t=0;t<=row+col-2;t++)
 for(i=0;i<=t;i++)
 {  if(i>row-1||t-i>col-1)
 continue;
	 printf("%d\n",*(array+i*col+t-i));

 }







}



