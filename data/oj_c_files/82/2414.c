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
	int n;
	cin>>n;
	int m=0,t=0;
	for(int k=0;k<n;k++){
		int p1,p2;
		cin>>p1>>p2;
		if(p1<=140&&p1>=90&&p2<=90&&p2>=60){
			t++;
		}else{
			if(m<t){
				m=t;
			}
			t=0;
		}
	}
	if(m<t){
		m=t;
	}
	cout<<m;
	return 0;
}