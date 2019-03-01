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
{int zs;
 cin>>zs;
 if(zs%105==0)
	 cout<<"3"<<" "<<"5"<<" "<<"7"<<endl;
 else if(zs%35==0&&zs%3!=0)
	 cout<<"5"<<" "<<"7"<<endl;
 else if(zs%21==0&&zs%5!=0)
	 cout<<"3"<<" "<<"7"<<endl;
 else if(zs%15==0&&zs%7!=0)
	 cout<<"3"<<" "<<"5"<<endl;
 else if(zs%7==0&&zs%5!=0&&zs%3!=0)
	 cout<<"7"<<endl;
 else if(zs%7!=0&&zs%5==0&&zs%3!=0)
	 cout<<"5"<<endl;
 else if(zs%7!=0&&zs%5!=0&&zs%3==0)
	 cout<<"3"<<endl;
 else if(zs%7!=0&&zs%5!=0&&zs%3!=0)
	 cout<<"n"<<endl;
 return 0;
}