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

//***************************************************************************************
//*? ? ?:???????.cpp                                                          *
//*?    ?:??? 1000012817                                                           *   
//*????:2010-11-18                                                                  *                                 
//*????:???????????                                                      *
//***************************************************************************************
int main()						   //???
{
	int i,j;
	char a[101];					   //??????????
	cin.getline(a,101);				   //?????
	for (i=0;i<(strlen(a));){			   //???????
		if(a[i]==' '&&a[i+1]==' '){		   //?????????
			i=i;//????i??
			for(j=i;j<(strlen(a)+1);j++){	   //????????????
				a[j]=a[j+1];
			}
		}
		else i++;			 	   //????i=i+1
	}
	cout<<a;					   //????
	cout<<endl;
return 0;
}							   //?????