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


int a(int x,int i)                          //?x?????i??
{
	if(i==1)
		return x;
	else return a(x,i-1)/2;
}
int main()
{
	int x,y;                                //??x?y           
	cin>>x>>y;
	int xline[100],yline[100];              //??x?y???
	int i=1;                                //??x?y???
	do{
		xline[i]=a(x,i);
		i++;
	}while(a(x,i));
	int j=1;
	do{
		yline[j]=a(y,j);
		j++;
	}while(a(y,j));
	for(j--,i--;yline[j]==xline[i]&&j>=1&&i>=1;j--,i--);//??????????????
	cout<<xline[++i];
	return 0;
}
