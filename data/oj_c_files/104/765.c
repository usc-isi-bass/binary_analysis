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

int f(int x ,int y){				//??????????????????
	int p;							//????
	if(x==y) return x;		        //?x=y??????x
	else {							//??
		if(x>y){
			p=x;
			x=y;
			y=p;
		}							//?y????
		if(y%2==0)y=y/2;			
		else y=(y-1)/2;				//?y???????y
		return f(x,y);				//??f(x,y)
    }
}
int main() {						//?????
	int x,y;					    //????
	cin>>x>>y;					    //??x,y
	cout<<f(x,y)<<endl;			    //?????????
	return 0;
}