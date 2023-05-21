#pragma once

class Counter
{
public:

    void Increment();
    void Decrement();
    int Get_value();

    Counter(int value = 1) : user_input(value) // ����� �����������, ����������� ���������� ��� � ����������, ��� � ��� ����.
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
