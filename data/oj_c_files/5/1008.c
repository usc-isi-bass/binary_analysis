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
	char a[1000],b[1000];
	double w;
	int count=0,lena,lenb;
	scanf("%lf",&w);
	cin>>a;
	cin>>b;
	lena=strlen(a);
	lenb=strlen(b);

	if(lena!=lenb)printf("error");
	else{
		int i,j,k=0;
		for(i=0;i<lena;i++){
		if(!((a[i]=='A'||a[i]=='C'||a[i]=='G'||a[i]=='T')&&(b[i]=='A'||b[i]=='G'||b[i]=='C'||b[i]=='T'))){
			printf("error");k=1;break;

		}
	}
		if(k==0){
			for(j=0;j<lena;j++){
				if(a[j]==b[j])count++;
			}
			double what;
			what=(double)count/lena;
				if(what>=w)printf("yes");
				else printf("no");
				}
			}
	return 0;
		}
