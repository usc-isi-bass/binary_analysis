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
	int sz[500];
	int i,n,k,e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);}
	for(k=1;k<n;k++){
	for(i=0;i<n-k;i++){
		if(sz[i]>sz[i+1]){
		e=sz[i];
			
		sz[i]=sz[i+1];
		sz[i+1]=e;}}
	}
	
		
		for(i=0;i<n;i++){
			if(sz[i]%2!=0){
				printf("%d",sz[i]);
				break;}}
		for(i++;i<n;i++){
			if(sz[i]%2!=0){
				printf(",%d",sz[i]);}}
return 0;
}