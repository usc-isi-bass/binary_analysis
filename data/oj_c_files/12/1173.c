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
	int	A[16],pause,i,k,m,count;

	for(;;){
		    count=0;
		    for (i=0;i<16;i++){
		               scanf("%d",&A[i]);
		               if(A[i] == 0 ||A[i] == -1)
                       {
                       break;
                       }
	        }
			if(A[i] == -1)
            {
						break;
			}
			for(i=0;i<16;i++){
							if(A[i] == 0)
                            {
								pause=i;
								 break;
							}
			}
			for(k=0;k<pause;k++){
					for(i=0;i<pause;i++){
							if ( A[k] == 2*A[i])/*??2?*/{
								count++;
							}
					}
			}	
			printf("%d\n",count);
	}     
   return 0;
}
