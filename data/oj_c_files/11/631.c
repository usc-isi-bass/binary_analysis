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

//#include <math.h>
int main(int argc, char* argv[])
{			
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31,30,31};
	int y,m,d,i,c;
	scanf("%d%d%d",&y,&m,&d);
	if((y%4==0)&&(y%100!=0)||(y%400)==0)
	{
		days[2]++;
	}
	c=d;
	for(i=1;i<m;i++)
	{
		c+=days[i];
	}
	printf("%d",c);
	return 0;
}