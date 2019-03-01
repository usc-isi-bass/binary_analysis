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

//***************************************************************************
//??????
//????????????????
//??????
//***************************************************************************
int main()
{ 
	                                           //??A,B,C?????
	int A, B, C, appetiteA, appetiteB, appetiteC,c[3];
	for(appetiteA = 0; appetiteA <= 2; appetiteA++)
		for(appetiteB = 0; appetiteB <= 2; appetiteB++)
			for(appetiteC = 0; appetiteC <= 2; appetiteC++)
			{
				A = (appetiteB > appetiteA) + (appetiteC == appetiteA);
				B = (appetiteA > appetiteB) + (appetiteA > appetiteC);
				C = (appetiteC > appetiteB) + (appetiteB > appetiteA);
				if(A != B && A != C && B != C)
				{
					c[0] = A;
					c[1] = B;
					c[2] = C;
				}
			}
	//cout<<c[0]<<c[1]<<c[2]<<endl;
    cout<<"B"<<"C"<<"A"<<endl;
	return 0;
}
					
