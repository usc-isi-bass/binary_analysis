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


void main()
{
	int n, i, m, j, score[60], sum;
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		
		scanf("%d", &m);
		for(j=0;j<m;j++){
			scanf("%d", &score[j]);			
		}	
	    sum=0;					
	    if(m==0){
		   sum+=60;
		}
		else if(m!=0){
			for(j=0;j<m;j++){
			    sum=0;				
				if(score[j]+3*j>=60){
			       sum+=60-(3*j);
				   break;
				}
				else{
				   if(score[j]<=45){
				   sum+=60-(3*m);
				   }			   
				   else if(score[j]>45){
				   sum+=score[j];					   
				   break;
				   }
				}
			}
		}
		printf("%d\n", sum);
	}
}