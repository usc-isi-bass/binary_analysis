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
//*  ??? ???????    *
//*  ??? 1100012820        *
//*  ?? 20110915            *
//*****************************


int main()
{
	int i, n;                  //????n?????i
	double a, b, c, det;           //????????????????;
	cin>>n;                   //??????n
	
	cout<<fixed<<setprecision(5);
	for (i=1; i<=n; i++)      //????????
	{
		cin>>a>>b>>c;         //?????
		det = b * b - 4 * a * c;   //?????
		if (det < 0)            //???????0
		{
			if (a > 0)          //??a??0
				cout<<"x1="<<b / a / (-2) + 1 - 1
					<<"+"<<sqrt(fabs(det))/ a / 2
					<<"i;x2="<<-(b / a / 2) + 1 - 1
					<<-sqrt(fabs(det))/ a / 2
					<<"i"<<endl;
			               //???????
			else       //??a??0
				cout<<"x1="<<(-b) / a / 2
					<<"+"<<sqrt(fabs(det))/ a / 2
					<<"i;x2="<<-(b / a / 2)
					<<-sqrt(fabs(det))/ a / 2
					<<"i"<<endl;
			               //???????
		}
		else if (det == 0)    //???????0
			cout<<"x1=x2="<<(-b) / a / 2<<endl;
	                 //??????
		else               //????????0?
			cout<<"x1="
				<<(- b + sqrt(b * b - 4 * a * c)) / (2 * a)
				<<";x2="
				<<( - b - sqrt( b * b - 4 * a * c)) / (2 * a)
				<<endl;
	                 //???????
		             //????
	}    //????
	return 0;
}