#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    //сохранение длины строки в size и указателя на строку в str
    String(const char* str = "")
    {
        this->size = strlen(str);
        this->str = new char[size + 1];
        strcpy(this->str, str);
    }

    //создание строки заданной длины, заполненной заданным символом
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

    //деструктор
    ~String()
    {
        delete[] this->str;
    }

    //конструктор копирования
    String(const String& other) : size(other.size), str(new char[other.size + 1])
    {
        for (size_t i = 0; i != this->size + 1; ++i)
        {
            this->str[i] = other.str[i];
        }
    }

    //конструктор присваивания
    String& operator=(const String& other)
    {
        if (this != &other)
        {
            String(other).swap(*this);
            return *this;
        }
    }
    //обмен значениями полей
    void swap(String& other)
    {
        std::swap(this->size, other.size);
        std::swap(this->str, other.str);
    }

    //добавление копии строки-аргумента в конец текущей строки
    void append(String& other)
    {
        //суммарный размер двух строк
        size_t sumSize = this->size + other.size;

        //суммарная строка
        char* sumStr = new char[sumSize + 1];

        //копирование первой строки
        for (size_t i = 0; i < this->size; i++)
        {
            sumStr[i] = this->str[i];
        }

        //копирование второй строки
        for (size_t i = this->size, j = 0; i < sumSize; ++i, ++j)
        {
            sumStr[i] = other.str[j];
        }

        //добавление нулевого символа
        sumStr[sumSize] = '\0';

        //удаление скопированной строки
        delete[] this->str;

        //установка указателя на суммарную строку
        this->str = sumStr;

        //запоминание суммарного размера
        this->size += other.size;
    }

    size_t size;
    char* str;
};