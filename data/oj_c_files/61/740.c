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
	int n,a,x,y,e;
	int i=0,j=0;
	int s[21];
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a==1||a==2){
			y=1;
		}
		else{
             j=0;
			for(j=0;j<a-1;j++){
				if(j==0){
					y=1;
					x=1;
				}
				if(j>0){
					e=y;
					y=x+y;
					x=e;
				}
			}
		}
		s[i]=y;
	}
	i=0;
	for(i=0;i<n;i++){
		printf("%d\n",s[i]);
	}
  return 0;

}
