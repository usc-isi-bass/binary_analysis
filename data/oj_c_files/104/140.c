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
{
	int n1,n2,n1_[100],n2_[100],i=0,j=0;
	scanf("%d%d",&n1,&n2);
	do
	{
		n1_[i]=n1;
		n1=n1/2;
		i++;
	}while(n1>=1);
	n1_[i]=1;
	do
	{
		n2_[j]=n2;
		n2=n2/2;
		j++;
	}while(n2>=1);
	n2_[j]=1;
	for(;;i--,j--)
	{
		if(n1_[i]!=n2_[j])
			break;
	}
	printf("%d",n1_[i+1]);
}
