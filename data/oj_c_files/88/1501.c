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

// ???????//
//??????//
//???1000011029//
//???2010?12?14?//


int main()
{
	char num[31];                                                 //?????//
	char*p;                                                       //????//
	char*m;
	int i = 0;                                                    //????//
	int mount = 0;                                                //????//

	cin.getline(num,31);                                          //?????//

	int len = strlen( num );                                      //???????//
	
	p = num;                                                      //?????//

	for( i = 0;i < len;i++ )
	{
		if( (*p) - '0' >= 0 && (*p) - '0' <= 9 )                  //??????????//
			cout << *p;
		else
			if( *(p - 1) - '0' >= 0 && *( p - 1 ) - '0' <= 9 )    //????????????????//
			{
				cout << endl;
				mount++;
			}
		p++;
		

	}

	return 0;
}