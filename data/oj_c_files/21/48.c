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

float absd(float a)
{
	if (a<0)
		a=-a;
	return(a);
}
void main()
{   
	float ave,num,s;
	int m,j,k,i,a[300]={0};
	scanf("%d",&m);
	s=0;
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
    for(i=0;i<m;i++)
		s=s+a[i];
	ave=s/m;
	num=absd(a[0]-ave);
	k=a[0];j=0;
	for (i=1;i<m;i++)
	{
		if (absd(ave-a[i])>num)
		{
		  num=absd(ave-a[i]);
		  k=a[i];
		}
	    else
		  if(absd(ave-a[i])==num)
            j=a[i];
    }
		  if(j==0)
		printf("%d",k);
	else
		if(k>j)
			printf("%d,%d",j,k);
		else
            printf("%d,%d",k,j);

}