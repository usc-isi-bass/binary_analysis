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
	int i,k,m;
	float s[100][3];
    scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(k=0;k<2;k++)
		{
			scanf("%d",&(s[i][k]));
			s[i][2]=1.0*(s[i][1])/(s[i][0]);
		}
	}
	for(i=1;i<m;i++)
	{
		if(((s[i][2])-(s[0][2]))>0.05)
		{
			printf("better\n");
		}
		else if(((s[0][2])-(s[i][2]))>0.05)
		{
			printf("worse\n");
		}
		else if((((s[0][2])-(s[i][2]))<=0.05)&&(((s[0][2])-(s[i][2]))>=-0.05))
		{
			printf("same\n");
		}
	}



return 0;
}