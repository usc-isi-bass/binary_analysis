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

//**********************************
//****       ??????     *****
//****        1200016612      *****
//**  ?????3?5?7????  **
//**********************************
int main()                           //?????
{
	int m=0,i=3,j=0;                     //??????m,i,??i??????????3
	cin>>m;
	if(m%3==0||m%5==0||m%7==0)       //??m????????????????????
	{while(i<8)                      //?i?3,5,7?????i??m?????i??
	    {if(m%i==0)                  
		{j=j+1;                       //j??????j=1?????????????????
	    if(j==1) cout<<i;
	    else if(j==2||j==3) cout<<" "<<i;   
	}
		i=i+2;}
	 }
	else                             //??m???3,5,7??????????n
		cout<<"n"<<endl;
	return 0;
}