struct Expression
{
    virtual double evaluate() const = 0; //чистый виртуальный метод
    virtual ~Expression() {}
};

struct Number : Expression
{
    Number(double value)
        : value(value)
    {}
    double evaluate() const override
    {
        return this->value;
    }
    //~Number(){}
private:
    double value;
};

struct BinaryOperation : Expression
{
    BinaryOperation(Expression const* left, char op, Expression const* right)
        : left(left), op(op), right(right) //op - это операция
    { }

    double evaluate() const override
    {
        if (op == '+')
        {
            return left->evaluate() + right->evaluate();
        }
        if (op == '-')
        {
            return left->evaluate() - right->evaluate();
        }
        if (op == '*')
        {
            return left->evaluate() * right->evaluate();
        }
        if (op == '/')
        {
            return left->evaluate() / right->evaluate();
        }
    }
    ~BinaryOperation() {
        delete left;
        delete right;
    }

private:
    Expression const* left;
    Expression const* right;
    char op;
};