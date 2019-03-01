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


 
main(){

int n,m,a,b,p;

scanf("%d",&n);

for(int i=1;i<=n;i++){

	scanf("%d",&m);

	if(i==1){a=m;


	}

	else if(i==2){

		b=m;
     
		if(b>=a){p=a;

       a=b;

	   b=p;

		}


	}

	else if(i>=3){


		if (m>a&&m>b){


			p=a;

			a=m;

			b=p;


		}

		else {

			if(m<a&&m>b){


				b=m;

			}






		}
   

	
	}
}



printf("%d\n%d\n",a,b);





	return 0;
	  

}