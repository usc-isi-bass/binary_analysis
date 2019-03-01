//reference :
//http://www.geeksforgeeks.org/convert-floating-point-number-string/
#include<stdio.h>
#include<stdint.h>
#include<math.h>

void reverse(char *str, int len);
int intToStr(int x, char str[], int d);
void ftoa(float n, char *res, int afterpoint);

int main(void) {
    char res[12] = "asdfasdfasd";
    float n = 1234567.123;
    ftoa(n, res, 3);
    char * buffer = res;
    printf("%c", buffer[0]);
    return 0;
}

// reverses a string 'str' of length 'len'
void reverse(char *str, int len)
{
    int i = 0;
    if(str[0] == '-') i = 1;
    int j=len-1, temp;
    while (i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
}

// Converts a given integer x to string str[].  d is the number
// of digits required in output. If d is more than the number
// of digits in x, then 0s are added at the beginning.
int intToStr(int x, char str[], int d)
{
    int unum = x;
   int i = 0;
   if(x < 0){
       str[i++] = '-';
       unum = -x;
   }
   while (unum)
   {
       str[i++] = (unum%10) + '0';
       unum = unum/10;
   }

   // If number of digits required is more, then
   // add 0s at the beginning
   while (i < d)
       str[i++] = '0';

   reverse(str, i);
   str[i] = '\0'; //i == length
   return i;
}

// Converts a floating point number to string.
void ftoa(float n, char *res, int afterpoint)
{
    // Extract integer part
    int ipart = (int)n;
    printf("%f\n", n);
    // Extract floating part
    float fpart = n - (float)ipart;

    if(fpart < 0) fpart = -fpart;
    // convert integer part to string
    int i = intToStr(ipart, res, 0);

    // check for display option after point
    if (afterpoint != 0)
    {
        res[i] = '.';  // add dot

        // Get the value of fraction part upto given no.
        // of points after dot. The third parameter is needed
        // to handle cases like 233.007
        fpart = fpart * pow(10, afterpoint);

        intToStr((int)fpart, res + i + 1, afterpoint);
    }
}

char* itoa(int num,char*str,int radix)
{
char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
unsigned unum;
int i=0,j,k;

if(radix==10&&num<0)
{
unum=(unsigned)-num;
str[i++]='-';
}
else unum=(unsigned)num;

do{
str[i++]=index[unum % (unsigned)radix];
unum/=radix;
}while(unum);
str[i]='\0';

if(str[0]=='-')k=1;
else k=0;
char temp;
for(j=k;j<=(i-1)/2;j++)
{
temp=str[j];
str[j]=str[i-1+k-j];
str[i-1+k-j]=temp;
}
return str;
}