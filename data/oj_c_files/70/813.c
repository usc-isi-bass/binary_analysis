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
	int n,i,j;
	double max=0,lmax,a[100],b[100],s[100][100];
    cin>>n;                                                      //????
	for(i=0;i<n;i++)
	   cin>>a[i]>>b[i];                                          //??????
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{s[i][j]=pow((a[i]-a[j]),2)+pow((b[i]-b[j]),2);          //?????????????
		if(s[i][j]>max) max=s[i][j];                             //?????????????
		}
	}
    lmax=sqrt(max); 
	printf("%.4f\n",lmax);                                        //????????
	return 0;
}