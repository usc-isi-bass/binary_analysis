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

//*****************************************************************************
//*                                                                           *
//*              ??????       ???        1300012743                  *
//*                                                                           *
//*****************************************************************************

//                          ?? - ???



int main(){
	unsigned int x,y;
	cin>>x>>y;
	while(x != y){
		if(x > y)
			x /= 2;
		else
			y /= 2;
	}
	cout<<x<<endl;
	return 0;
}