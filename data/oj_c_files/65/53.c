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
	struct s{
		int b,c;
	}a[201];
	int i,n,p=0,q=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&(a[i].b),&(a[i].c));
	for(i=0;i<n;i++){
		if((a[i].b)==1&&(a[i].c)==2)
			p+=1;
		else if((a[i].b)==2&&(a[i].c)==0)
			p+=1;
		else if((a[i].b)==0&&(a[i].c)==1)
			p+=1;
		else if((a[i].b)==1&&(a[i].c)==0)
			q+=1;
		else if((a[i].b)==2&&(a[i].c)==1)
			q+=1;
		else if((a[i].b)==0&&(a[i].c)==2)
			q+=1;
	}
	if(p>q)
		printf("A");
	else if(p<q)
		printf("B");
	else if(p=q)
		printf("Tie");
	return 0;
}