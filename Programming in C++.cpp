bool check_equals(Expression const* left, Expression const* right)
{
    if (*(void**)(left) == *(void**)(right))
    {
        return true;
    }
    else
    {
        return false;
    }
}