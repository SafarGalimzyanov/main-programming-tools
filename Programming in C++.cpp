void strcat(char* to, const char* from)
{
    //������� � ����� ������ to
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