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
	int a,b,c,d,e,f,i,r;
    for(i=0;i>=0;i++){
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
		d=d+12;
		r=(d-a-1)*3600+(3600-b*60-c)+e*60+f;
		printf("%d\n",r);
	}else{
		return 0;
	}}
	return 0;
}
