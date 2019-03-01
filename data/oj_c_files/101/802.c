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

//*****************************
//*???
//******************************
int main()
{
	int A,B,C;
	int sumA,sumB,sumC;
	sumA=(B>A)+(C==A);
	sumB=(A>B)+(A>C);
	sumC=(C>B)+(B>A);
	if(A>B&&B>C&&sumA<sumB&&sumB<sumC)
		cout<<"CBA"<<endl;
	if(A>C&&C>B&&sumA<sumC&&sumC<sumB)
		cout<<"BCA"<<endl;
	if(B>A&&A>C&&sumB<sumA&&sumA<sumC)
		cout<<"CAB"<<endl;
	if(B>C&&C>A&&sumB<sumC&&sumC<sumA)
		cout<<"ACB"<<endl;
	if(C>A&&A>B&&sumC<sumA&&sumA<sumB)
		cout<<"BAC"<<endl;
	if(C>B&&B>A&&sumC<sumB&&sumB<sumA)
		cout<<"ABC"<<endl;
	return 0;
}