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
	int n,i,max=0;
	int x=0;
	int sz[100],sc[100];
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
      scanf("%d%d",&sz[i],&sc[i]);
	}


		for(i=0;i<n;i++)
		{
             if(sz[i]>=90&&sz[i]<=140&&sc[i]>=60&&sc[i]<=90){
		     x=x+1;
	
			 }
			 else{
		        if(x>max){
				 max=x;
				 x=0;
				}
				else{
					x=0;
				}
			
			 }
			 
		}
 
		if(x>max){
			max=x;
		}

        printf("%d",max);
	
	return 0;
}

