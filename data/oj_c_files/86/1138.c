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
	int n,suspend,number,times;
	//n???????suspend??????number??????times??????
	cin>>n;
	for(;n>0;n--){
		cin>>number;
		times=60;
		for(;number>0;number--){
			cin>>suspend;
			if(suspend<times-2)times-=3;
			else if(suspend>=times);
			else times=suspend;
		}
		cout<<times<<endl;
	}
	return 0;
}