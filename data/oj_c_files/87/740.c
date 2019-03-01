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
	int b,c,d,e;
int sum[100][6];
for(int i=0;i<100;i++){
scanf("%d%d%d%d%d%d",&(sum[i][0]),&(sum[i][1]),&(sum[i][2]),&(sum[i][3]),&(sum[i][4]),&(sum[i][5]));
sum[i][3]=sum[i][3]+12;
if(sum[i][5]<sum[i][2]){
	e=sum[i][5]+60-sum[i][2];
	sum[i][4]--;
}else{
	e=sum[i][5]-sum[i][2];
}if(sum[i][4]<sum[i][1]){
	d=sum[i][4]+60-sum[i][1];
	sum[i][3]--;
}else{
	d=sum[i][4]-sum[i][1];
}c=sum[i][3]-sum[i][0];
b=c*3600+d*60+e;
if(sum[i][0]==0){
	break;
}
printf("%d\n",b);

}

return 0;
}