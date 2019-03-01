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
    int n,i,sum=0;
	double z=0,t[M];

	int xf[M],g[M];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&xf[i]);
		sum+=xf[i];

	}

	for(i=1;i<=n;i++){
		scanf("%d",&g[i]);
		if(g[i]<60){t[i]=0;}
		if(g[i]>=60&&g[i]<=63){t[i]=1.0;}
		if(g[i]>=64&&g[i]<=67){t[i]=1.5;}
		if(g[i]>=68&&g[i]<=71){t[i]=2.0;} 
		if(g[i]>=72&&g[i]<=74){t[i]=2.3;}  
		if(g[i]>=75&&g[i]<=77){t[i]=2.7;} 
		if(g[i]>=78&&g[i]<=81){t[i]=3.0;} 
		if(g[i]>=82&&g[i]<=84){t[i]=3.3;} 
		if(g[i]>=85&&g[i]<=89){t[i]=3.7;} 

		if(g[i]>=90){t[i]=4.0;}

        z+=t[i]*xf[i];		
	
	}
    printf("%.2lf",z/sum);
    
		
	return 0;

}
 
