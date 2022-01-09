struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();

    //операторы +=, -=, *=, /= для объектов класса Rational и целых чисел
    Rational& operator+=(Rational const& rational) {
        this->add(rational);
        return *this;
    }
    Rational& operator+=(double i) {
        this->add(Rational(i));
        return *this;
    }
    Rational& operator-=(Rational const& rational) {
        this->sub(rational);
        return *this;
    }
    Rational& operator-=(double i) {
        this->sub(Rational(i));
        return *this;
    }
    Rational& operator*=(Rational const& rational) {
        this->mul(rational);
        return *this;
    }
    Rational& operator*=(double i) {
        this->mul(Rational(i));
        return *this;
    }
    Rational& operator/=(Rational const& rational) {
        this->div(rational);
        return *this;
    }
    Rational& operator/=(double i) {
        this->div(Rational(i));
        return *this;
    }
    Rational operator-() const {
        Rational temp(this->numerator_, this->denominator_);
        temp.neg();
        return temp;
    }
    Rational operator+() const {
        Rational temp(this->numerator_, this->denominator_);
        return temp;
    }

    double to_double() const;

    //оператор приведения к double
    operator double() const {
        return double(this->numerator_) / (double(this->denominator_));
    }

    friend bool operator==(Rational const& left, Rational const& right);
    friend bool operator!=(Rational const& left, Rational const& right);
    friend bool operator<(Rational const& left, Rational const& right);
    friend bool operator<=(Rational const& left, Rational const& right);
    friend bool operator>(Rational const& left, Rational const& right);
    friend bool operator>=(Rational const& left, Rational const& right);

private:
    int numerator_;
    int denominator_;
};

//операторы сравнения для объектов класса Rational и целых чисел
bool operator==(Rational const& left, Rational const& right)
{
    return (left.numerator_ * right.denominator_) == (left.denominator_ * right.numerator_);
}
bool operator!=(Rational const& left, Rational const& right)
{
    return !(left == right);
}

bool operator<(Rational const& left, Rational const& right)
{
    return (left.numerator_ * right.denominator_) < (left.denominator_ * right.numerator_);
}
bool operator<=(Rational const& left, Rational const& right)
{
    return (left < right) || (left == right);
}

bool operator>(Rational const& left, Rational const& right)
{
    return (left.numerator_ * right.denominator_) > (left.denominator_ * right.numerator_);
}

bool operator>=(Rational const& left, Rational const& right)
{
    return (left > right) || (left == right);
}

//операторы +, -, *, /   для объектов класса Rational и целых чисел
Rational operator+(Rational rational1, Rational rational2) {
    rational1.add(rational2);
    return rational1;
}
Rational operator-(Rational rational1, Rational rational2) {
    rational1.sub(rational2);
    return rational1;
}
Rational operator*(Rational rational1, Rational rational2) {
    rational1.mul(rational2);
    return rational1;
}
Rational operator/(Rational rational1, Rational rational2) {
    rational1.div(rational2);
    return rational1;
}