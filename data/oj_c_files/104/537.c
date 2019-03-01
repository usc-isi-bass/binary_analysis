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
{//de
	void seq(int m,int*seqm);
	int a,b;
	int seqa[10],seqb[10];
	int i,t;
//in
	scanf("%d%d",&a,&b);
//pro
	seq(a,seqa);
	seq(b,seqb);
//ou
	for(i=0;seqa[i]==seqb[i];i++)t=seqa[i];
	printf("%d",t);
	return 0;
}

void seq(int m,int*seqm)
{
	int i,j;
	int temp[10];
	temp[0]=m;
	for(i=1;m>1;i++)
		temp[i]=m=m/2;
	for(j=i;j>=0;j--)
		seqm[j-1]=temp[i-j];



}
