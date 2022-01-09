void strcat(char* to, const char* from)
{
    //переход к концу строки to
    while (*to != '\0')
    {
        ++to;
    }
    while (*to = *from)
    {
        ++to;
        ++from;
    }
}