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

int sum[1000000];
struct student{
	   int id;
	   int Gra[2];
	   }stu[1000000];
int main()
{
       int n;
      
      cin>>n;
      for(int i=0;i<n;i++)
        {
    	  cin>>stu[i].id>>stu[i].Gra[0]>>stu[i].Gra[1];
    	  sum[i]=stu[i].Gra[0]+stu[i].Gra[1];
        }
      int max=0,imax=0;
      for(int i=0;i<3;i++)
      {    max=0;
    	  for(int j=0;j<n;j++)
    		  if(max<sum[j])  {max=sum[j];imax=j;}

    	  cout<<stu[imax].id<<" "<<sum[imax]<<endl;
    	  sum[imax]=0;


      }

     return 0;
}

