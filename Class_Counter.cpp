#include "Class_Counter.h"


class Counter
{
public:

    void Increment()
    {
        this->user_input += 1;
    }
    void Decrement()
    {
        this->user_input -= 1;
    }
    int Get_value()
    {
        return this->user_input;
    }
    Counter(int value = 1) : user_input(value) // новый конструктор, позволяющий обратиться как с параметром, так и без него.
    {
    }

private:

    int user_input;
};

enum class Commands
{
    Increment = '+',
    Decrement = '-',
    Get_value = '=',
    Exit = 'x',
};