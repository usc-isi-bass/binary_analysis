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
	int a=0;
	cin>>a;
	int b=0,c=0,d=0;//b?c?d???a??3?5?7???
	b=a%3;
	c=a%5;
	d=a%7;
	if(b==0&&c==0&&d==0)
		cout<<"3 5 7"<<endl;
	else
		if(b==0&&c==0)
			cout<<"3 5"<<endl;
		else
			if(c==0&&d==0)
				cout<<"5 7"<<endl;
			else
				if(b==0&&d==0)
					cout<<"3 7"<<endl;
				else
					if(b==0)
	                    cout<<"3"<<endl;
					else
						if(c==0)
							cout<<"5"<<endl;
						else
							if(d==0)
								cout<<"7"<<endl;
							else
								cout<<"n"<<endl;
	cin.get();cin.get();cin.get();cin.get();cin.get();
	return 0;
}

