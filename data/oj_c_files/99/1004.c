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
    int sz[100];
	int n,i,s1,s2,s3,s4;
	s1=s2=s3=s4=0;
	scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&sz[i]);
		}
		for(i=0;i<n;i++){
			if(sz[i]<=18){
				s1++;
			}else if(sz[i]>18&&sz[i]<=35){
				s2++;
			}else if(sz[i]>=36&&sz[i]<=60){
				s3++;
			}else{
				s4++;
			}
		}
		printf("1-18: %.2lf%%\n",100*(double)s1/n);
		printf("19-35: %.2lf%%\n",100*(double)s2/n);
		printf("36-60: %.2lf%%\n",100*(double)s3/n);
		printf("60??: %.2lf%%\n",100*(double)s4/n);
    return 0;
}
