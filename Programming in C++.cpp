#include <cstddef>

template <typename T>
struct Array
{
    //   ����������� ������, ������� �������
    //   Array ������� size, ����������� ����������
    //   value ���� T. �������� ��� � ���� T ����
    //   �����������, ������� ����� ������� ���
    //   ��� ����������, ���� �� ��� �� �����.
    explicit Array(size_t size = 0, const T& value = T()) : size_(size), data_(new T[size])
    {
        for (size_t i = 0; i != size_; ++i)
        {
            data_[i] = value;
        }
    }

    //   ����������� �����������, ������� �������
    //   ����� ���������. ��������, ��� ��� ����
    //   T ��������� �������� ������������.
    Array(const Array& arr) : size_(arr.size_), data_(new T[arr.size_])
    {
        for (size_t i = 0; i != size_; ++i)
        {
            data_[i] = arr.data_[i];
        }
    }

    ~Array()
    {
        delete[] data_;
    }

    //   �������� ������������.
    Array& operator=(const Array& arr)
    {
        if (this != &arr)
        {
            delete[] data_;
            size_ = arr.size_;
            data_ = new T[size_];
            for (size_t i = 0; i != size_; ++i)
            {
                data_[i] = arr.data_[i];
            }
        }
        return *this;
    }

    //
    //   ���������� ������ ������� (���������� ���������).
    size_t size() const
    {
        return size_;
    }

    //   ��� ������ ��������� ������� �� �������.
    T& operator[](size_t i)
    {
        return data_[i];
    }
    const T& operator[](size_t i) const
    {
        return data_[i];
    }

    size_t size_;
    T* data_;
};

//����� ������������ ��������
template <typename Type1, typename Type2>
Type1 minimum(Array<Type1>& a, Type2 comp)
{
    size_t size = a.size();
    Type1 min = a[0];
    for (int i = 1; i != size; ++i)
    {
        if (comp(a[i], min))
        {
            min = a[i];
        }
        else {}
    }
    return min;
}

//����� ���������
template <typename T>
void flatten(const T& value, std::ostream& out)
{
    out << value << " ";
}
//����� �������
template <typename T>
void flatten(const Array<T>& array, std::ostream& out)
{
    for (size_t i = 0; i < array.size(); ++i)
    {
        flatten(array[i], out);
    }
}