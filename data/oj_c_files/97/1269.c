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

int main(){
	int sum;
	int a1,b1,c1,d1,e1,f1;
	int numa,numb,numc,numd,nume,numf;
	scanf("%d",&sum);
	a1=sum%100;
	numa=(sum-a1)/100;
	b1=(sum-100*numa)%50;
	numb=(sum-100*numa-b1)/50;
	c1=(sum-100*numa-50*numb)%20;
	numc=(sum-100*numa-50*numb-c1)/20;
	d1=(sum-100*numa-50*numb-20*numc)%10;
	numd=(sum-100*numa-50*numb-20*numc-d1)/10;
	e1=(sum-100*numa-50*numb-20*numc-10*numd)%5;
	nume=(sum-100*numa-50*numb-20*numc-10*numd-e1)/5;
	f1=(sum-100*numa-50*numb-20*numc-10*numd-5*nume)%1;
	numf=(sum-100*numa-50*numb-20*numc-10*numd-5*nume-f1);
	printf("%d\n%d\n%d\n%d\n%d\n%d",numa,numb,numc,numd,nume,numf);
	return 0;
}