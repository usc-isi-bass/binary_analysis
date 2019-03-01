typedef union 
{
    u8 CharData[4];
    u32 Int32Data;    
} HEX_Int32;
    

void Int32_to_Hex(u8 *s,u32 data)
{
    
    HEX_Int32 HEXInt32;
    HEXInt32.Int32Data= data;
    s[3]=HEXInt32.CharData[0];
    s[4]=HEXInt32.CharData[1];
    s[5]=HEXInt32.CharData[2];
    s[6]=HEXInt32.CharData[3];
    
}
