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
	char zf[301],zm[53]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	gets(zf);
	int n;
		n=strlen(zf);
	int sz[52];
	for(int k=0;k<52;k++){
		sz[k]=0;
	}
	int a,m;
	for(a=0;a<n;a++){
		for(m=0;m<52;m++){
			if(zf[a]==zm[m]){
				sz[m]++;
			}
		}
	}
	int c=0,b;
	for(b=0;b<52;b++){
	   if(sz[b]!=0){
			   printf("%c",zm[b]);
			   printf("=%d\n",sz[b]);
			   c++;
		   }
	}
	if(c==0){
		   printf("No");
	}
	   return 0;
}
