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
   char str[50];
   int n;
   int i;
   cin.getline(str,50);                            //?????
   for(n=0;str[n]!='\0';n++);                      //???????
   for(i=0;i<n;i++)
   {
	if(str[i]>=48&&str[i]<=57)                     //???????????
    cout<<str[i];
    else if((str[i]<48||str[i]>57)&&(str[i+1]>=48&&str[i+1]<=57))   //??????????????????????
    cout<<endl;
   }


return 0;
}