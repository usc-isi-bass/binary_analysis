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
	int a[200],b[200],n,i,x,y;
	x=0;
	y=0;
	scanf("%d\n",&n);
	if(n<=0||n>+200){
		return 0;
	}
	else {
		for(i=0;i<n;i++){
			scanf("%d %d",&a[i],&b[i]);
			if(a[i]==0&&b[i]==1){
				x++;
			}
			else if(a[i]==1&&b[i]==2){
				x++;
			}
			else if(a[i]==2&&b[i]==0){
				x++;
			}
			else if(a[i]==b[i]){
				x++;
				y++;
			}
			else{
				y++;
			}
		}
		if(x>y){
			printf("A");
		}
		if(x<y){
			printf("B");
		}
		if(x==y){
			printf("Tie");
		}
	}
	return 0;
}


	

		
	
	
