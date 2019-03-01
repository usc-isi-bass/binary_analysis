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

int main(int argc, char* argv[])
{
int n;
scanf("%d\n",&n);
double *px,*py;
px=(double *)malloc(sizeof(double) * n);
py=(double *)malloc(sizeof(double) * n);
int i;
for(i=0;i<n;i++){
	scanf("%lf%lf",&px[i],&py[i]);
}
double dis,mdis;
mdis=0;
int j;
for(j=n-1;j>0;j--){
	for(i=0;i<j;i++){
	   dis=(px[j]-px[i])*(px[j]-px[i])+(py[j]-py[i])*(py[j]-py[i]);
	   if(mdis<dis) mdis=dis;}
}
mdis=sqrt(mdis);
free(px);
free(py);
printf("%.4f\n",mdis);

 
	return 0;
}

