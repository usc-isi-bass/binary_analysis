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

int bianhao(int m,int n);
int main(){
	int i,a,t;
	int m[10000],n[301];

	for(i=0;i>-1;i++){
		scanf("%d""%d",&n[i],&m[i]);
		if((m[i]==0)&&(n[i]==0)){
			break;
		}
	}
	for(t=0;t<i;t++){
		a=bianhao(m[t],n[t]);
        printf("%d\n",a);
	}
     return 0;
}



int bianhao(int m,int n)
{
    int s=0,i;
    for(i=2;i<=n;i++){
	    s=(s+m)%i;
	}
	s=s+1;
	return s;
}


