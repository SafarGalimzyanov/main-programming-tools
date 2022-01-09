template<typename mue, typename shue>
struct SameType
{
    static const bool value = 0;
};

template <typename mue>
struct SameType <mue, mue>
{
    static const bool value = 1;
};