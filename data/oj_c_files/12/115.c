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
    int p[15];	
	scanf("%d",&p[0]);
		int i;
		int l=0;
	for(i=1;i<15;i++){
		int a;
		scanf("%d",&a);
		if(a==0)
			break;
		else{
			p[i]=a;
			l++;}
	};
	int j,m,max;
	for(j=0;j<l-1;j++){
		for(m=j+1;m<l;m++)
	if(p[j]>p[m]){
	max=p[j];
	p[j]=p[m];
	p[m]=max;
	}
	}
    int num=0;
	int k,n;
	for(k=0;k<l-1;k++){
		for(n=k+1;n<l;n++){
		if((p[n]/p[k])==2&&p[n]%p[k]==0)
			num++;
		if(p[n]/p[k]>2)
			break;
		}
	}
	printf("%d",num);
	return 0;
}