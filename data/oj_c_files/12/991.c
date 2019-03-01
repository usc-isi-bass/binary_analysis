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


int main()
{   int i,n,a,b,k;
    k=0;
    int sz[20],sz2[20],jieguo[1000];
	while(1){
		for(i=0;;i++){
		 scanf("%d",&(sz[i]));
		 if(sz[i]==0||sz[i]==-1){
		 break;}
		 sz2[i]=sz[i];}
	 	 if(sz[i]==-1){
		 break;}
		 n=0;
		 for(a=0;a<i;a++){
			for(b=0;b<i;b++){
			  if(sz2[b]*2==sz[a]){
				n++;}}}
		 jieguo[k]=n;
		 k++;
	  	}
        for(i=0;i<k;i++){
        printf("%d\n",jieguo[i]);
	}
	return 0;
}
