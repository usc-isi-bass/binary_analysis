#include <math.h>

uint8_t is_digit(u8 ch)  
{  
    if(ch>='0'&&ch<='9')  
        return 1;  
    else  
        return 0;  
}

uint8_t is_letter(u8 ch)  
{  
    if(ch>='A'&&ch<='Z')  
        return 1;  
    else  
        return 0;  
}

uint8_t is_space(u8 ch)  
{  
    if(ch==' ')  
        return 1;  
    else  
        return 0;  
}

uint8_t is_inquiry(u8 *s)
{
    uint8_t i=0;
    
    while(s[i] != '=') i++;
    i++;               
    if(s[i] == '?')
            return 1;
    else
        return 0;
}

void Convert_ASCII_to_INT_Array(u8 *s,u8 *p)
{
    u8 value=0;
    if(s[0] == '!')
    {
        if((s[1] == '0')&&(s[2] == '1'))
        {
            value = (s[3]- 0x30)*0x10 + (s[4]- 0x30);
            p[0] = value & 0x01;
            p[1] = value & 0x02;
            p[2] = value & 0x04;
            p[3] = value & 0x08;
            p[4] = value & 0x10;
            p[5] = value & 0x20;
            p[6] = value & 0x40;
            p[7] = value & 0x80;
        }
    }
}