struct ScopedPtr
{
    //создание экземпл€ра класса
    explicit ScopedPtr(Expression* ptr = 0) : ptr_(ptr) {}
    //деструктор
    ~ScopedPtr()
    {
        delete this->ptr_;
    }
    //вывод указател€
    Expression* get() const
    {
        return this->ptr_;
    }
    //создаЄтс€ новый указатель, старый обнул€етс€
    Expression* release()
    {
        Expression* aue = this->ptr_;
        this->ptr_ = NULL;
        return aue;
    }
    //удаление старого указател€, установка на новый
    void reset(Expression* ptr = 0)
    {
        delete this->ptr_;
        this->ptr_ = ptr;
    }
    Expression& operator*() const {};
    Expression* operator->() const {};


private:
    // запрещаем копирование ScopedPtr
    ScopedPtr(const ScopedPtr&);
    ScopedPtr& operator=(const ScopedPtr&);

    Expression* ptr_;
};