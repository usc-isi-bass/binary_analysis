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
	int a,b[100][15],c,i,m,x,y,n,e;
	c=0;
    i=0;
		for(m=0;m<16;m++){
			scanf("%d",&a);
			  if(a!=0){
		        b[i][m]=a;
				}
			  if(a==0){
				 	for(x=0;x<m;x++){
					 for(y=0;y<m;y++){
						n=b[i][x]/b[i][y];	
						e=b[i][x]%b[i][y];
                           if(n==2&&e==0){
							c++;
						}
					}	
				}
			printf("%d\n",c);
			 c=0;
			 m=-1;
			 i++;
		} 
		if(a==-1)
				break;
		}
		return 0;
		}
