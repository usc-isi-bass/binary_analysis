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
	int n,i,j,k=0;double d[20][2],jl[200],t;                                                  //????????????
	cin >> n;                                                                                 //?????
	for(i=0;i<n;i++)                                                                          //?????
	{
		cin >> d[i][0] >> d[i][1];
	}
	for(i=0;i<n;i++)                                                                          //?????
	{
		for(j=i+1;j<n;j++)
		{
			jl[k]=sqrt((d[j][0]-d[i][0])*(d[j][0]-d[i][0])+(d[j][1]-d[i][1])*(d[j][1]-d[i][1]));
			k++;
		}
	}
	t=jl[0];                                                                                  //???????
    for(i=0;i<k;i++)
	{
		if(jl[i]>t)
			t=jl[i];
	}
	printf("%.4f\n",t);
	return 0;
}
