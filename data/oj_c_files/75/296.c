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
	int it[1001],ot[1001],tr[1001]={0},i,j,k,a,b,c,rs,trm=0;
	for(i=0;;i++)
	{
	scanf("%d",&it[i]);
	if((c=getchar())=='\n')
		break;
	}
	rs=i+1;
	for(i=0;i<rs;i++)
	{
		scanf("%d",&ot[i]);
		getchar();
	}





	for(i=0;i<rs;i++)
	{
		for(j=it[i];j<ot[i];j++)
			tr[j]++;
	}
	for(j=0;j<1000;j++)
	{
		if(tr[j]>trm) trm=tr[j];
	}
	printf("%d %d",rs,trm);


}


