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

//????1062 ???
//??????
//?????2010-11-24
//???????x?y???xi 


int main()
{
	int x,y,max,i,check[1001]={0,2,0};
	cin>>x>>y;
	if (x>y) max=x;else max=y;
	while (x!=1)//??x???? 
	{
		check[x]++;
		x=x/2;
	}
	while (y!=1)//??y???? 
	{
		check[y]++;
		y=y/2;
	}
	for (i=max;i>=1;i--)//?????? 
	  if (check[i]==2) {
  		cout<<i;
  		return 0;
  	}
}