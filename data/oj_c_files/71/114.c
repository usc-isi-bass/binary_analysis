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
 *  ???:???
 *  ??: 2010-12-17
 *  ??: ???
 *  ??: ???????????????YES?
			?????NO?
 */


int is_Runnian(int year){				//??????
	if(year%4 != 0) return 0;
	else{
		if(year%100 == 0 && year%400 != 0)
			return 0;
	}
	return 1;
}

int main(){
	int monthday[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int n;
	cin >> n;

	int i=0;
	while(i < n){
		int year, month1, month2, month1day=0, month2day=0;
		cin >> year >> month1 >> month2;

		if(is_Runnian(year)) monthday[1] = 29;		//????? ????29?
		for(int j=0; j<month1-1; j++){
			month1day += monthday[j];
		}
		for(int j=0; j<month2-1; j++){
			month2day += monthday[j];
		}

		int p = (month2day-month1day>0 ? (month2day-month1day) : (month1day-month2day));

		if(p%7 == 0)				//??7??
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		if(monthday[1] == 29)
			monthday[1] = 28;
		i++;
	}
}
