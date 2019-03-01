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
	int days=0,firstday;//days???????????firstday???????
	cin>>firstday;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0;i<12;i++){
		for(int j=0;j<i;j++) days=days+month[j];//?????????????
		days=days+12+firstday;//????13???????????
		if(days%7==5) cout<<i+1<<endl;
		days=0;
	}
}