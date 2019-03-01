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

//************************************************************************
//* ??? ????????.cpp                                          *
//* ?? ????                                                        *
//* ???? ?2010?11?26?                                            *
//************************************************************************
int main()
{
	char a[100];                                  //????????
	gets( a );                                    //??????
	char*p;
	p=a;                                          //??????p,?????????????
	int i;
	for ( i=0; a[i]!='\0' ; i++ )
	{
		if ( *(p+i)==' '&&*(p+i-1)==' ' )         //??i?????i+1???????,?????i???
			continue;
		cout<<*(p+i);
	}
	cout<<endl;
	return 0;
}
