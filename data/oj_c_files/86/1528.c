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
	int n,i,j,m,s,t[60];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m==0)
			s=60;
		else{
			for(j=0;j<m;j++){
				scanf("%d",&t[j]);
			}
			for(j=0;j<m;j++){
				if(t[j]+3*(j+1)<60){
					s=60-3*(j+1);
				}else if(t[j]+3*j<60){
					s=t[j];
					break;
				}else if(t[j]<60){
					s=60-3*j;
					break;
				}
			}
		}printf("%d\n",s);
	}
	return 0;
}