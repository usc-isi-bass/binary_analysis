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


int s[110];

int main(){
	int n,i,a,b,sum=0,c=0;
	cin>>n;
	for (i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if (a<=140&&a>=90&&b>=60&&b<=90){
			s[i]=1;
		}
	}
	
	for (i=0;i<n;i++){
		if (s[i]){
			c++;
		}else 
			c=0;
		if (sum<c){
			sum=c;
		}
	}
	printf("%d\n",sum);
}