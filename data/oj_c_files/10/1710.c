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


int height[26];

int cal(int N,int M){//N&#206;a&#191;a�&#188;��&#189;&#207;?&#196;�y?&#196;&#206;&#187;&#214;&#195;?&#172;M&#206;a�?&#207;&#194;?&#196;�y?&#196;&#184;&#246;�y?&#172;N+M=��?&#196;�y&#184;&#246;�y 
	int i,max,sub;
	max=0;
	if(M==0){
		return 1;
	}
	for(i=N+1;i<=N+M;i++){
		if(height[N]>=height[i]){
			sub=cal(i,N+M-i);
			if(sub>=max){
				max=sub;
			}
		}
	} 
	return max+1;
}

int main()
{
	int k,i;
	scanf("%d\n",&k);
	height[0]=10000000; 
	scanf("%d",&height[1]);
	for(i=1;i<=k-1;i++){
		scanf(" %d",&height[i+1]);
	}
	
	printf("%d",cal(0,k+1)-2);
	
	return 0;
 } 
 
