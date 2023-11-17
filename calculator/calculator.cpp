#include <iostream>

class Calculator
{
public:
    double num1;
    double num2;

    double add()
    {
        return this->num1 + this->num2;
    }

    double multiply()
    {
        return this->num1 * this->num2;
    }

    double subtract_1_2()
    {
        return this->num1 - this->num2;
    }

    double subtract_2_1()
    {
        return this->num2 - this->num1;
    }

    double divide_1_2()
    {
        return this->num1 / this->num2;
    }

    double divide_2_1()
    {
        return this->num2 / this->num1;
    }

    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
        std::cout << "Неверный ввод!" << std::endl;
        return false;
    }
    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        std::cout << "Неверный ввод!" << std::endl;
        return false;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    for (;;)
    {
        Calculator calculator;
        double number1 = 0, number2 = 0;
        bool num1IsOk = false, num2IsOk = false;

        while (!num1IsOk)
        {
            std::cout << "Введите num1:\t";
            std::cin >> number1;
            num1IsOk = calculator.set_num1(number1);
        }

        while (!num2IsOk)
        {
            std::cout << "Введите num2:\t";
            std::cin >> number2;
            num2IsOk = calculator.set_num2(number2);
        }

        std::cout << "num1 + num2 = " << calculator.add() << std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;
    }
}
