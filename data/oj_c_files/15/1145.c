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
	int n,u[1000][1000],i,j,chang=0,bian=0,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		scanf("%d",&u[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(u[i][j]==0){
				chang=chang+1;
			}
		}
		if(chang!=0){
			break;
		}
	}

	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(u[i][j]==0){
				bian=bian+1;
			}
		}
		if(bian!=0){
			break;
		}
	}
   sum=(chang-2)*(bian-2);
  printf("%d",sum);
	
      return 0;	
}

