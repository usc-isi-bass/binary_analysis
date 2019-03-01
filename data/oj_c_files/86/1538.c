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
	int n,i,m,j,s[100],t,total,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
scanf("%d",&m);
t=0;
k=0;
total=60;
if(m!=0){
for(j=0;j<m;j++){
	scanf("%d",&(s[j]));
}
for(j=0;j<m;j++){
	t=s[j]+k;
	if(t>60)
		break;
	if(t>57){
		total-=(60-t);
		break;
	}
	if(t<58){
total-=3;
k+=3;
	}

}
}
printf("%d\n",total);
	}
return 0;
}