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
	scanf("%d\n",&n);
	int i=1;
	int m=0;
	int max=0;
	while(i<=n){
		int s,z;
		scanf("%d%d",&s,&z);
		if(s>=90&&s<=140&&z<=90&&z>=60){
			m=m+1;
		}else{
			if(max>m){
				max=max;
			
			}else{
				max=m;
			}
			m=0;
		}
		i=i+1;}
	if(max>m){
				max=max;
			
			}else{
				max=m;
			}
	printf("%d",max);
return 0;}
