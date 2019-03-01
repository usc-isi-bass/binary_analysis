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


int h,l,(*p)[100];
void shuchu(int a)
{int r,c,i=0;
 r=0;c=a;
 for(;r<h;i++)
 {if(c>=0&&c<l)
	printf("%d\n",*(*(p+r)+c));
  r+=1;c-=1;
 }

}

int main()
{int i,j;
 scanf("%d %d",&h,&l);
p=(int (*)[100])malloc(h*100*sizeof(int));
 for(i=0;i<h;i++)
  for(j=0;j<l;j++)
	  scanf("%d",*(p+i)+j);
  for(i=0;i<h+l-1;i++)
	  shuchu(i);
}