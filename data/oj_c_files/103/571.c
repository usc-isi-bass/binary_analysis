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
	int n=1,i,j,m=0;
	char k[1001],y[27]="abcdefghijklmnopqrstuvwxyz",z[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int s[26];
	scanf("%s",k);
    for(i=0;i<strlen(k);i++){
    for(j=0;j<26;j++){
    if(k[i]==y[j])
    k[i]=z[j];}}
	for(i=0;i<strlen(k);i=i+n){
    printf("(%c,",k[i]);
    for(n=0;n<(strlen(k)-i);n++){
    if(k[i+n]==k[i])
    m++;
    else
    break;}
    printf("%d)",m);
    m=0;}
}
