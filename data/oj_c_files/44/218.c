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

int reverse(int num)                                      //?????
{
	int a[10],i,j,m,count=0;                        
	int newnum=0;
	if(num>=0){                                     //????????0?
	   for(i=0; ;i++){
                 m=pow(10.0,i);
	       a[i]=num/m%10;
	       if(m>num) {count=i; break;}                   //???????
	}
		
	      for(j=0;a[j]!=0;j++){
		m=pow(10.0,count-j-1);
		newnum=a[j]*m;
		break;
	      }
		for(i=j+1;i<count;i++) {
		    m=pow(10.0,count-1-i);
		    newnum=newnum+a[i]*m;
		}
	    return (newnum);                                //???????
	}
	if(num<0){              //?????????????????????
	   num=-num;
	   for(i=0; ;i++){
	      m=pow(10.0,i);
	      a[i]=num/m%10;
	      if(m>num) {count=i; break;}
	   }
		
	      for(j=0;a[j]!=0;j++){
		m=pow(10.0,count-j-1);
		newnum=a[j]*m;
		break;
	      }
		for(i=j+1;i<count;i++) {
		    m=pow(10.0,count-1-i);
		    newnum=newnum+a[i]*m;
		}
	    return (-newnum);
	}

}
    
int main()                                 //?????
{   
	int num,i;
	for(i=0;i<6;i++)
	{
	   cin>>num;
	   cout<<reverse(num)<<endl;                //??reverse??
	}
	return 0;
}
