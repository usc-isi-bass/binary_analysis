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

void main()
{
int i,max,sec,k=0;
int c[300];
char a[300];
for(i=0;i<300;i++){
scanf("%d%c",&c[i],&a[i]);
k++;
if(a[i]=='\n')
break;}
if(k!=1){
for(i=k-1;i>=0;i--){
if(c[i]!=c[0])
break;
k--;
}}
max=c[0];
for(i=1;i<k;i++){
	if(c[i]>max){
      max=c[i];}}
if(k==1||k==0)
printf("No");
else{
	sec=0;
	for(i=0;i<k;i++){
		if(c[i]<max&&c[i]>sec){
		sec=c[i];}}
	printf("%d",sec);
}
}