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
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
int k;
scanf("%d",&k);
int sz[100];
if(k==0){printf("60\n");}
else{
for(int a=1;a<=k;a++){
scanf("%d",&sz[a]);}
int p;
if((sz[k]+3*k)<60){
	p=60-3*k;
printf("%d\n",p);}
else{for(int b=1;b<=k;b++){
int q;
q=sz[b]+3*(b-1);
if(q>=57&&q<=60){
	p=sz[b];
printf("%d\n",p);
break;}
else if(q>60){
p=60-3*(b-1);
printf("%d\n",p);
break;}}}}}
return 0;
}

