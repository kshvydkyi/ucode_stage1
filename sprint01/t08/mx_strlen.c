void mx_printchar(char c);
int mx_strlen(const char *s)
{
    int len = 0;
    for(int i = 0; *s++; i++)
    {
        len++;
    }
    return len;
}
