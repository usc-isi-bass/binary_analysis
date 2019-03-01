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

int search(int x1,int x2)
{
	int i;
	for(i=0;i<=10;i++)
	{
	   if(x1>=pow(2,i)&&x1<pow(2,i+1)&&x2>=pow(2,i)&&x2<pow(2,i+1))
		   return x1;
	   else continue;
	   }
	  x1=x1/2; return search(x1,x2);
	

}
int equal(int x1,int x2)
{
   if(x1==x2)return x1;
   else 
   {x1=x1/2;x2=x2/2;return equal(x1,x2);}
	   
}

int main()
{
  int x1,x2,temp;
  cin>>x1>>x2;
  if(x1<x2)
	{
      temp=x1;
	  x1=x2;
	  x2=temp;
	  
	}
  x1=search(x1,x2);
  cout<<equal(x1,x2);
  return 0;


}