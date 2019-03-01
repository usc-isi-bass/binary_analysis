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
	int z,q,s,l,i,s1,s2,s3;                                        //??z,q,s,l????
    char a[5]={' '};                                               //???????a[5]??????
	for(z=1;z<=5;z++){                                             //???z,q,s,l
		for(q=1;q<=5;q++){
			if(z==q) continue;
			for(s=1;s<=5;s++){
				if(s==z||s==q) continue;
				for(l=1;l<=5;l++){
					if(l==z||l==q||l==s) continue;
					s1=(z+q==s+l);
					s2=(z+l>s+q);
					s3=(z+s<q);
					if(s1+s2+s3==3){
						a[z]='z';
						a[q]='q';
						a[s]='s';
						a[l]='l';
						for(i=5;i>=1;i--){                         //?????
							if(a[i]!=0)
								cout<<a[i]<<" "<<i*10<<endl;}}}}}}
	return 0;
}

