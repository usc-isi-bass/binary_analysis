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

//??? ??????
//???	 1000094801



int main ()
{
	int number, digit[6], nDigit, revNumber;					//?????number?????digit[]????????nDigit?number?????revNumber????
	
	cin>>number;												//????

	digit[1]= number/10000;										//??????????????10000??????????
	digit[2]=(number%10000)/1000;								//?????????????mod10000???????1000???????
	digit[3]=((number%10000)%1000)/100;							//?????????????mod10000???????mod1000???????100???????
	digit[4]=(((number%10000)%1000)%100)/10;					//??????????
	digit[5]=(((number%10000)%1000)%100)%10;					//??????????


	if(number>9999) nDigit=5;									//?????10000????????5???????5??			
	if(number>999&& number <=9999) nDigit=4;					//?????1000-9999????????4?
	if(number>99 && number <=999) nDigit=3;						//?????100-999????????3?
	if(number>9 && number <=99) nDigit=2;						//?????10-99????????2?
	if(number>0 && number <=9) nDigit=1;						//?????1-9????????1?


	revNumber = digit[5]*pow(10.0,nDigit-1) + digit[4]*pow(10.0,nDigit-2) + digit[3]*pow(10.0,nDigit-3) +digit[2]*pow(10.0,nDigit-4) + digit[1]*pow(10.0,nDigit-5);
	//?????? *10^????-1?+??????*10^(???-2?+...+????*10^(0);
	//??????86031?1*10^4 + 3*10^3 + 0*10^2+ 6*10^1 + 8*10^0 = 13068?

		cout<<revNumber;										//?????
	

return 0;														//?0??main?
}