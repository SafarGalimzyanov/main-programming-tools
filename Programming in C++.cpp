#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    //���������� ����� ������ � size � ��������� �� ������ � str
    String(const char* str = "")
    {
        this->size = strlen(str);
        this->str = new char[size + 1];
        strcpy(this->str, str);
    }

    //�������� ������ �������� �����, ����������� �������� ��������
    String(size_t n, char c)
    {
        this->size = n;
        this->str = new char[size + 1];
        this->str[n] = '\0';
        while (n--)
        {
            this->str[n] = c;
        }
    }

    //����������
    ~String()
    {
        delete[] this->str;
    }

    //����������� �����������
    String(const String& other) : size(other.size), str(new char[other.size + 1])
    {
        for (size_t i = 0; i != this->size + 1; ++i)
        {
            this->str[i] = other.str[i];
        }
    }

    //����������� ������������
    String& operator=(const String& other)
    {
        if (this != &other)
        {
            String(other).swap(*this);
            return *this;
        }
    }
    //����� ���������� �����
    void swap(String& other)
    {
        std::swap(this->size, other.size);
        std::swap(this->str, other.str);
    }

    //���������� ����� ������-��������� � ����� ������� ������
    void append(String& other)
    {
        //��������� ������ ���� �����
        size_t sumSize = this->size + other.size;

        //��������� ������
        char* sumStr = new char[sumSize + 1];

        //����������� ������ ������
        for (size_t i = 0; i < this->size; i++)
        {
            sumStr[i] = this->str[i];
        }

        //����������� ������ ������
        for (size_t i = this->size, j = 0; i < sumSize; ++i, ++j)
        {
            sumStr[i] = other.str[j];
        }

        //���������� �������� �������
        sumStr[sumSize] = '\0';

        //�������� ������������� ������
        delete[] this->str;

        //��������� ��������� �� ��������� ������
        this->str = sumStr;

        //����������� ���������� �������
        this->size += other.size;
    }

    size_t size;
    char* str;
};