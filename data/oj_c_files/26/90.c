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

//***************************************************
//*                           ???????        *
//*                       2010.11.19                *
//***************************************************
int main()
{
	char a[100];                      //????a?
	int i,j,k,n;
	cin.get(a,100,'\n');              //???????
	n=strlen(a);                      //n???????
	for(i=0;i<n;i++)    
	{
		if(a[i]==' ')            //??????
		{
			for(j=1;;j++)   //????????????????????????????????
			 if(a[j+i]!=' ') break;
			for(k=i;k<n;k++)  //??????????????????????
				a[k+1]=a[k+j];
		}
		
		
	}
	cout<<a;                                     //?????
			 



	return 0;
}
