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

char queue[100];
char boy,girl;
int stop=0;
int length;
int main()
{
   
   cin>>queue;
   boy=queue[0];
   length=strlen(queue);
   int number;
   for(int i=0;i<length;i++)
   {
     if(queue[i]!=boy)
		 {
			 girl=queue[i];
			 number=i;
			 break;
	    }   
   }
   void handinhand(int);
   handinhand(number);
}


void handinhand(int number)
{
     if(stop==length)
		 return;

	 int theotherside=0;
	 for(int a=1;;a++)
	 {
	     if(queue[number-a]==boy)
			 {
				 theotherside=number-a;
				 break;
		 }
	 
	 }
	 cout<<theotherside<<' '<<number<<endl;
	 queue[number]=' ';
	 queue[theotherside]=' ';
	 stop=stop+2;
	
	 for(int i=number+1;;i++)
	 {
	         if(queue[i]==girl)
			 {
			      handinhand(i);
			      break;
			 }
	 
	 }


}