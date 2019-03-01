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
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		int sz[50];
		int m;
		int j;
		if(i!=1){
		    	printf("\n");
			}
		scanf("%d",&m);
		
		if(m==0){
			printf("60");
		}else{
			
		    for(j=0;j<m;j++){
		    	scanf("%d",&sz[j]);
			}
			
	    	sz[m]=60;

	    	int count=sz[0]+3;
	    	int num=sz[0];
		    for(j=1;j<=m;j++){
			    if(count+3+sz[j]-num<=60){
				    count+=3+sz[j]-num;
		     		num=sz[j];
				}else{
			    	if(count-num+sz[j]<=60){				    	
					    num=sz[j];
				        break;
					}
			    	else{
		    			num=num+60-count;
						
			    		break;
					}
				}
			}

	    	
	        printf("%d",num);
		}
	    	i++;
	}
	return 0;
}