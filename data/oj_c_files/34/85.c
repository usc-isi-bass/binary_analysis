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

/*

?? 
???????????????????????????3?1??????????2?????????????????????????1??????????5????????16?8?4?2?1? 
??????????????????1????????
 
???? 
????
 
???? 
??????1???????????????????????????7?????? 
7*3+1=22 
22/2=11 
11*3+1=34 
34/2=17 
17*3+1=52 
52/2=26 
26/2=13 
13*3+1=40 
40/2=20 
20/2=10 
10/2=5 
5*3+1=16 
16/2=8 
8/2=4 
4/2=2 
2/2=1 
??????"End"??????1?????"End" 

 
???? 
5
 
???? 
5*3+1=16
16/2=8
8/2=4
4/2=2
2/2=1
End
 
 
*/



void process(int af)
{
	int bf;
	if (af%2==0)
	{
		bf=af/2;
		cout<<af<<"/2="<<bf<<endl;
		process(bf);
	}
	else if ((af%2==1)&&(af!=1))
	{
		bf=af*3+1;
		cout<<af<<"*3+1="<<bf<<endl;
		process(bf);
	}
	else if (af==1)  cout<<"End"<<endl;
}


int main()
{
	int n;
	cin>>n;
	process(n);
    return 0;
}