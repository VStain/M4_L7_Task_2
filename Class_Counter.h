#pragma once

class Counter
{
public:

    void Increment();
    void Decrement();
    int Get_value();

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
    Exit = 'x'
};
