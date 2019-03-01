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
	int n,m,sz[100],i,result;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);

		if(m==0)
			printf("60\n");

		else{
			for(i=0;i<m;i++){
				scanf("%d",&sz[i]);
			}

			if(sz[m-1]+3*(m)<=60){
				result=60-(sz[m-1]+3*(m))+sz[m-1];
				printf("%d\n",result);
			}

			else if(sz[m-1]+3*m>60&&sz[m-1]+3*m<=63)
				printf("%d\n",sz[m-1]);

			else {
				for(i=m-2;i>=0;i--){
					if(sz[i]+3*(i+1)<=60){
						printf("%d\n",60-(sz[i]+3*(i+1))+sz[i]);
						break;}
					if(sz[i]+3*(i+1)>60&&sz[i]+3*(i+1)<=63){
						printf("%d\n",sz[i]);
						break;}
				}
			}


		}
	}
	
	return 0;
}