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
	int i=0, j=0, f_num, result=0, score[20];
	for (i=0; i<n ;i++){
		scanf(" %d", &f_num);
		if (f_num==0){
			result=60;
		}
		else{
			for (j=0; j<f_num; j++){
		      scanf(" %d", &score[j]);
			  if (score[j]<= 60-3*f_num){
				  if (score[j]>= 60-3*(f_num+1)){
                      result=score[j];
				  }
				  else{
					  result= 60-3*f_num;
				  }
			  }
			  else{
				if (score[j-1]>= 60-3*(f_num- 1) && score[j-1]<= 60-3*(f_num-2)){
				result= score[j-1];
				}
				else{
				   if (score[j]<= 60-3*(f_num-1) && score[j]>=60-3*f_num){
			           result= score[j];
				   }
			       else{
					   if (score[j-1]>=60-3*(f_num-1)){
						   result= 60- 3*(f_num-2);
					   }
					   else{
						   result= 60- 3*(f_num- 1);
					   }
					   
				   }
				}
			  }
			}
		}
        printf("%d\n", result);
	}
	return 0;
}