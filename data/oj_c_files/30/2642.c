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

//******************************************** 
//**  ????7???????               ** 
//**  ?????? 1300012917               **
//**  ???2013.10.11                      **
//********************************************
main()
{
	int n, i, s, a, b, c;                        //?????? 
	cin >> n;                                    //??n 
	s = n * (n + 1) * (2 * n + 1) / 6;           //???n??????? 
	//?n<7????s 
	if (n < 7)
	{
		cout << s;
		return(0);
	 }
	 
	//??17?n??????7?????? 
	a = 0;
	for (i = 17; i <= n; i += 10)
	  a = a + i * i;
	
	//????n?7??????? 
	b = 0;
	for (i = 7; i <= n; i += 7)
	  b = b + i * i;
	  
	//????n?????7?????? 
	c = 0;
	if (n > 70)
	  for (i = 71; (i <= n) && (i <= 79); i++) 
	    c = c + i * i;
	     
	s = s - a - b - c;                           //?s???a, b, c 
	if (n >= 77)
	  s += 2 * 77 * 77;                          //???77???3????? 
	cout << s;                                   //??s 
	return(0); 
 } 