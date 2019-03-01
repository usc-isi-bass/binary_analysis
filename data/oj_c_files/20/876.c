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

//??????
//20101219 liuyi
int main()
{

	 char str[11],substr[4];
	 while(cin>>str)
	 {
		 cin>>substr;
	     char *max=str,temp;
	     int i;
         for(i=0;i<strlen(str);i++)
	     if(str[i]>*max)                   //?????????
		   {
			 max=&str[i];
			 temp=*max;      
		   }
         *max=0;             //?str??????????????????
        cout<<str<<temp<<substr<<max+1<<endl;                //??????
	 }
	return 0;

}
		


