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
{
	int n,i,m=0,p=0;
	int	a[200],b[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]!=b[i]){
			if(a[i]+b[i]==1){
				if(a[i]>b[i]){
					p++;
				}else{
					m++;
				}
			}else if(a[i]+b[i]==3){
				if(a[i]>b[i]){
					p++;
				}else{
					m++;
				}
			}else if(a[i]+b[i]==2){
				if(a[i]>b[i]){
					m++;
				}else{
					p++;
				}
			}
		}
	}
		if(m>p){
			printf("A");
		}else if(m<p){
			printf("B");
		}else if(m==p){
			printf("Tie");
		}
		return 0;
	}
