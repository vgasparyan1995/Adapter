#include <vector>

namespace local
{

template <typename ValueType, typename Container = std::vector<ValueType> >
class stack
{
public:
    template <typename ... Args>
    stack(Args ... args);

    void push(const ValueType& val);
    void pop();
    ValueType& top();
    const ValueType& top() const;
    size_t size() const;

private:
    Container m_container;
};

template <typename ValueType, typename Container>
template <typename ... Args>
stack<ValueType, Container>::stack(Args ... args)
    : m_container(args ...)
{}

template <typename ValueType, typename Container>
void stack<ValueType, Container>::push(const ValueType& val)
{
    m_container.push_back(val);
}

template <typename ValueType, typename Container>
void stack<ValueType, Container>::pop()
{
    m_container.pop_back();
}

template <typename ValueType, typename Container>
ValueType& stack<ValueType, Container>::top()
{
    return m_container.back();
}

template <typename ValueType, typename Container>
const ValueType& stack<ValueType, Container>::top() const
{
    return m_container.back();
}

template <typename ValueType, typename Container>
size_t stack<ValueType, Container>::size() const
{
    return m_container.size();
}

} // namespace local
