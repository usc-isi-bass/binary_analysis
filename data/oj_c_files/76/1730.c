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
    int n,i,k,e,m,c,max,z,a;
    double j;	
    struct qj{
		int a,b;
	}qj[50000];
          scanf("%d",&n);	
for(i=0;i<n;i++)
{
	scanf("%d%d",&qj[i].a,&qj[i].b);
}
for(k=1;k<=n;k++)
{
	for(i=0;i<n-k;i++)
	{
		if(qj[i].a>=qj[i+1].a)
		{
		e=qj[i].a;
		qj[i].a=qj[i+1].a;
		qj[i+1].a=e;
		m=qj[i].b;
		qj[i].b=qj[i+1].b;
		qj[i+1].b=m;
		}
	}
}
max=0;
for(i=0;i<n;i++)
{
	if(max<qj[i].b)
      max=qj[i].b;
}
c=0;
for(j=qj[0].a+0.5;j<max;j++)
{
	z=0;
	for(i=0;i<n;i++)
	{
	if((j<qj[i].b)&&(j>qj[i].a))
           z=1;
	}
	if(z==1)
		c++;
}
if(c==(max-(qj[0].a)))
{
	printf("%d %d",(qj[0].a),max);
}
else{
	printf("no");
}

	return 0;

}