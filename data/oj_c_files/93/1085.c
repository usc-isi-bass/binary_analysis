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

//****************************************************
//*  ? ? ?: homework.cpp                          *
//*  ?    ?: ???                                *
//*  ????: 2012?9?24?                         *
//*  ????: ??3?5?7????                   *
//****************************************************

int main(){
	int a[4]; //??a ??n?????3 5 7?? 
	int i,n; //????
	cin >> n; //??n
	for (i=0;i<=3;i++){ //???a 
		a[i]=0;
	}
	if (n % 3 == 0){  //??n???3?? 
		a[1]=3;  //?? 
		a[0]++;  //?? 
	}
	if (n % 5 == 0){  //??n???5??  
		a[2]=5;  //?? 
		a[0]++;  //?? 
	}
	if (n % 7 == 0){  //??n???7??  
		a[3]=7;  //?? 
		a[0]++;  //?? 
	}
	if (a[0]!=0){ //??????3 5 7???? 
		for (i=1;i<=3;i++){ //??N????? 
			if (a[i]!=0){
				a[0]--;   
				if (a[0]!=0) {
					cout << a[i] << ' ';  //????? (???) 
				} 
				else cout << a[i];  //????? (????) 
			}
		}
	} 
	else cout << 'n';//?????'n' 
}
