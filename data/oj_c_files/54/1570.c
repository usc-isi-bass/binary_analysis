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
  int n,k;//n????????k?
  int apple[1000];
  int j=0;
  int m=0;
  cin>>n>>k;//?? 
  for(int i=0;i<1000;i++)
  {
	  apple[i]=k;//?????????? 
  } 
  
  do
  {
  	apple [n]=apple[n]+n;//?apple[n]???????n? 
  	for(j=n-1;j>=1;j--)
  	{
	  	if (apple [j+1]%(n-1)!=0)//????????????n-1????????? 
	  	break;
	  	else
	  	apple[j]=apple[j+1]*n/(n-1)+k;
	  }
  } 
  while (j>=1);
  for(int k=0;k<n;k++)
  {
  	if(apple[k]>m)
  	m=apple[k];//???????????? 
  }
  
  cout<<m<<endl;
  
  return 0; 
}