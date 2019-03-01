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
	int p,q,y;
    int sz[5][5];
    for(int row=0;row<5;row++){
		for(int col=0;col<5;col++){
            scanf("%d",&sz[row][col]);
		}
	}
	

	y=0;
	
	for(int row=0;row<5;row++){
		for(int col=0;col<5;col++){
			p=0;
			q=0;
            for(int m=0;m<5;m++){
				if(m!=col&&sz[row][col]>sz[row][m]){
				   p+=1;
				}
				if(m!=row&&sz[row][col]<sz[m][col]){
				   q+=1;
				}
			}
						if(p==4&&q==4){
				printf("%d %d %d",row+1,col+1,sz[row][col]);
                y+=1;
		
			}
		}
    }
	
	if(y==0){
		printf("not found");
   
		}

    return 0; 
  } 
