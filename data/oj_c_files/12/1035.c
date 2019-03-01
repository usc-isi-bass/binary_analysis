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
int a[100],i,j,num=0,total=0;
while(1){
	num=0;
while(1){
scanf("%d",&a[num]);
if(a[num]==0) break;
if(a[num]==-1) return 0;
num++;}

total=0;
for(i=0;i<num;i++){

for(j=0;j<num;j++){
if(a[j]==2*a[i]) total++;}}
printf("%d\n",total);}
	return 0;
}

