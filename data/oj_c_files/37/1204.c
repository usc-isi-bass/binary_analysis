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

char sz[100000];
int zd(char *sz);
int main(){
	int n,x;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%s",sz);
		x=zd(sz);
		if(x==0){
			printf("no\n");
		}
	}
	
	return 0;
}
int zd(char *sz){
	char *bz;
	bz="abcdefghijklmnopqrstuvwxyz";
	int js[26]={0};
	int len=strlen(sz);
	int i,j;
	for(i=0;i<len;i++){
		for(j=0;j<26;j++){
			if(bz[j]==sz[i]){
				js[j]++;
			}
		}
	}
	for(i=0;i<len;i++){
		for(j=0;j<26;j++){
			if(bz[j]==sz[i]){
				if(js[j]==1){
					printf("%c\n",sz[i]);
					return 1;
				}
			}
		}
	}
	return 0;
}
				