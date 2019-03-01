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


int depart(int x,int y)
{
	int i;
	int total;
	int t;
	for(total=1;;total++){
	    t=total;	
		for(i=0;;i++){
			if((t%x==y)&&(t/x>0)){             				                  t=t/x*(x-1);						}else{
				break;
			}		
		    if(i==x-1){
			    return total;
			}
		}
	}
}

void main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int sum;
	sum=depart(n,k);
	printf("%d",sum);
}