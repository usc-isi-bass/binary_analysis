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

/*
 * 1.cpp
 *  Created on: 2012-9-28
 *  Author: ???
 *  ??:?????????
 */
int main(){
	int n;//??�???�??
	cin>>n;//?????
	while(n--){//??n?????
		double a,b,c,d,e,delt=0.0,x1,x2;//????a,b,c,d,e,delt,x1,x2
		cin>>a>>b>>c;//???????a,b,c
		delt=b*b-4*a*c;//?delt??b*b-4*a*c
		if(delt==0){//??delt ??0
			x1=x2=(-b)/(2*a);//?x1?x2?????
			printf("x1=x2=%.5f\n",x1);//??x1,x2
		}
		else if(delt<0){//???delt??0??x1,x2???
			d=(-b)/(2*a),e=sqrt(4*a*c-b*b)/(2*a);
			if (d<=0&&d>-0.000001) d=0.0000001;//??d????d??0.0000001
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",d,e,d,e);//??x1,x2
		}
		else {//??x1,x2?????
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);//??x1,x2
		}

	}
}
