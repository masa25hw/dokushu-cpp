class A
{
    using integer = int;

    integer m_value;

    public:
        void setter(integer value);
        integer getter() const;
};

void A::setter(integer value)
{
    m_value = value;
}

A::integer A::getter() const
{
    return m_value;
}
