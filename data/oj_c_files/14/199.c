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

int main ( ) {
	int N , i ;
	cin >> N ;
	int Max1 = 0 , Max2 = 0 , Max3 = 0 , Nb[4] ;
	struct student {
		int Number ;
		int Chinese ;
		int Math ;
		int Total ;
	}people[111111];
	for ( i = 1 ; i <= N ; i ++ ) {
		cin >> people[i].Number >> people[i].Chinese >> people[i].Math ;
		people[i].Total = people[i].Chinese + people[i].Math ;
	}
	for ( i = 1 ; i <= N ; i ++ ) {
		if ( Max1 < people[i].Total ){
			Nb[1] = i ;
			Max1 = people[i].Total ;
		}
	}
	for ( i = 1 ; i <= N ; i ++ ) {
		if ( ( Max2 < people[i].Total ) && ( i != Nb[1] ) ){
			Nb[2] = i ;
			Max2 = people[i].Total ;
		}
	}
	for ( i = 1 ; i <= N ; i ++ ) {
		if ( ( Max3 < people[i].Total ) && ( i != Nb[1] ) && ( i != Nb[2] ) ){
			Nb[3] = i ;
			Max3 = people[i].Total ;
		}
	}
	for ( i = 1 ; i <= 3 ; i ++ ) {
	cout << people[Nb[i]].Number << " " << people[Nb[i]].Total ;
	if ( i < 3 )
		cout << endl ;
	}
	return 0 ;
}