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

/*
  Name: ????
  Copyright: 
  Author: 
  Date: 08/11/12 20:40
  Description:??????(????????)????????????????????????? 
*/
int main()
{
   char str[100][20]={'\0'};
    int i=0,k; 
    while(true)
	{
       cin>>str[i];
		i++;       // ?????????? 
	   if(cin.peek()=='\n')
		   break;
	}

    for(k=i-1;k>=0;k--)
	{
	  if(k==0)
          cout<<str[k]; //???? 
	  else
		  cout<<str[k]<<' ';
	}

           return 0;
}
