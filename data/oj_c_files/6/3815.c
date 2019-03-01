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
int n,i,k,l,ha,li,x,s;
scanf("%d",&n);
for(i=0;i<n;i++){
	s=0;
	scanf("%d %d",&ha,&li);
	for(l=0;l<ha;l++){
		for(k=0;k<li;k++){
			scanf("%d",&x);
			if(l==0||l==(ha-1)||(k==0&&l!=0&&l!=(ha-1))||(k==(li-1)&&l!=0&&l!=(ha-1))){
				s=s+x;
		}
	}
	}
printf("%d\n",s);
}
return 0;
}
