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

int main()
{
    int a=0;
	cin >>a;
	if (a%105==0)                                                        //????????3,5,7
		cout <<"3 5 7";
	else if (a%15==0 && a%7!=0)                                          //?????????3,5
		cout <<"3 5";
	else if (a%21==0 && a%5!=0)                                          //?????????3,7
		cout <<"3 7";
	else if (a%35==0 && a%3!=0)                                          //??????5,7
		cout <<"5 7";
	else if (a%3==0 && a%35!=0)                                          //???????????
		cout <<"3";
	else if (a%5==0 && a%21!=0)
		cout <<"5";
	else if (a%7==0 && a%15!=0)
		cout <<"7";
	else 
		cout <<"n";
	return 0;
}