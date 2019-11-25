unsigned char str[255];

void main()
{
    str[0] = 1;
    for (unsigned char i = 1; i < 127; i += 2) 
    {
        str[i] = i;
        str[i + 1] = i;
    }
}
