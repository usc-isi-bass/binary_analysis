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
         char str1[100],str2[100];             //?????????
	cin.getline(str1,100);                //?str1??
	int k=0;
         int flag=0; 
	for(int i=0;str1[i]!='\0';i++)         //for ??
	{
		if((str1[i]==' ')&&(flag==0))      //?????????0
		{
		    	flag=1;                    //????1
			    str2[k]=str1[i];           //????str2?
				k++;
		 }
		 if(str1[i]!=' ')                   //??????
		 {
			   flag=0;                      //???0
			   str2[k]=str1[i];             //??str2?
			   k++; 
		 }
		
	}
	for(int j=0;j<k;j++)                     //??str2
		cout<<str2[j];
	return 0;
}

				
				
		