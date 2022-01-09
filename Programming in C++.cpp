struct ScopedPtr
{
    //�������� ���������� ������
    explicit ScopedPtr(Expression* ptr = 0) : ptr_(ptr) {}
    //����������
    ~ScopedPtr()
    {
        delete this->ptr_;
    }
    //����� ���������
    Expression* get() const
    {
        return this->ptr_;
    }
    //�������� ����� ���������, ������ ����������
    Expression* release()
    {
        Expression* aue = this->ptr_;
        this->ptr_ = NULL;
        return aue;
    }
    //�������� ������� ���������, ��������� �� �����
    void reset(Expression* ptr = 0)
    {
        delete this->ptr_;
        this->ptr_ = ptr;
    }
    Expression& operator*() const {};
    Expression* operator->() const {};


private:
    // ��������� ����������� ScopedPtr
    ScopedPtr(const ScopedPtr&);
    ScopedPtr& operator=(const ScopedPtr&);

    Expression* ptr_;
};