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
    char word[100],b[100][100];
   int i=0,j=0,k=0;
   cin.getline(word,100);
   while (word[i]!='\0')   
   {
	   if(word[i]!=' ')
	   {b[j][k]=word[i];k=k+1;}
	   else {b[j][k]='\0';j=j+1;k=0;}
	   i=i+1;
   }
   b[j][k]='\0';
   for(i=j;i>0;i--)
      cout<<b[i]<<" ";
      cout<<b[0]<<endl;
   return 0;
}
