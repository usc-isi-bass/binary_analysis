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

int main(){
	int w,d,i;
	d=0;
	scanf("%d",&w);
	if(w==1){
		for(i=0;i<12;i++){
			if(i==0){
				if(13%7==5){
					printf("%d\n",i+1);
				}
			}
			else if(i==1||i==3||i==5||i==7||i==8||i==10){
			    d+=31;
			    if((d+13)%7==5){
				   printf("%d\n",i+1);
				}
			}
			else if(i==2){
				d+=28;
				if((d+13)%7==5){
				   printf("%d\n",i+1);
				}
			}
			else if(i==4||i==6||i==9||i==11){
				d+=30;
				if((d+13)%7==5){
				   printf("%d\n",i+1);
				}
			}
		}
	}
	else if(w==2){
		for(i=0;i<12;i++){
			if(i==0){
				if(13%7==4){
					printf("%d\n",i+1);
				}
			}
			else if(i==1||i==3||i==5||i==7||i==8||i==10){
			    d+=31;
			    if((d+13)%7==4){
				   printf("%d\n",i+1);
				}
			}
			else if(i==2){
				d+=28;
				if((d+13)%7==4){
				   printf("%d\n",i+1);
				}
			}
			else if(i==4||i==6||i==9||i==11){
				d+=30;
				if((d+13)%7==4){
				   printf("%d\n",i+1);
				}
			}
		}
	}
	else if(w==3){
		for(i=0;i<12;i++){
			if(i==0){
				if(13%7==3){
					printf("%d\n",i+1);
				}
			}
			else if(i==1||i==3||i==5||i==7||i==8||i==10){
			    d+=31;
			    if((d+13)%7==3){
				   printf("%d\n",i+1);
				}
			}
			else if(i==2){
				d+=28;
				if((d+13)%7==3){
				   printf("%d\n",i+1);
				}
			}
			else if(i==4||i==6||i==9||i==11){
				d+=30;
				if((d+13)%7==3){
				   printf("%d\n",i+1);
				}
			}
		}
	}
	else if(w==4){
		for(i=0;i<12;i++){
			if(i==0){
				if(13%7==2){
					printf("%d\n",i+1);
				}
			}
			else if(i==1||i==3||i==5||i==7||i==8||i==10){
			    d+=31;
			    if((d+13)%7==2){
				   printf("%d\n",i+1);
				}
			}
			else if(i==2){
				d+=28;
				if((d+13)%7==2){
				   printf("%d\n",i+1);
				}
			}
			else if(i==4||i==6||i==9||i==11){
				d+=30;
				if((d+13)%7==2){
				   printf("%d\n",i+1);
				}
			}
		}
	}
	else if(w==5){
		for(i=0;i<12;i++){
			if(i==0){
				if(13%7==1){
					printf("%d\n",i+1);
				}
			}
			else if(i==1||i==3||i==5||i==7||i==8||i==10){
			    d+=31;
			    if((d+13)%7==1){
				   printf("%d\n",i+1);
				}
			}
			else if(i==2){
				d+=28;
				if((d+13)%7==1){
				   printf("%d\n",i+1);
				}
			}
			else if(i==4||i==6||i==9||i==11){
				d+=30;
				if((d+13)%7==1){
				   printf("%d\n",i+1);
				}
			}
		}
	}
	else if(w==6){
		for(i=0;i<12;i++){
			if(i==0){
				if(13%7==0){
					printf("%d\n",i+1);
				}
			}
			else if(i==1||i==3||i==5||i==7||i==8||i==10){
			    d+=31;
			    if((d+13)%7==0){
				   printf("%d\n",i+1);
				}
			}
			else if(i==2){
				d+=28;
				if((d+13)%7==0){
				   printf("%d\n",i+1);
				}
			}
			else if(i==4||i==6||i==9||i==11){
				d+=30;
				if((d+13)%7==0){
				   printf("%d\n",i+1);
				}
			}
		}
	}
	else if(w==7){
		for(i=0;i<12;i++){
			if(i==0){
				if(13%7==6){
					printf("%d\n",i+1);
				}
			}
			else if(i==1||i==3||i==5||i==7||i==8||i==10){
			    d+=31;
			    if((d+13)%7==6){
				   printf("%d\n",i+1);
				}
			}
			else if(i==2){
				d+=28;
				if((d+13)%7==6){
				   printf("%d\n",i+1);
				}
			}
			else if(i==4||i==6||i==9||i==11){
				d+=30;
				if((d+13)%7==6){
				   printf("%d\n",i+1);
				}
			}
		}
	}
	return 0;
}