#include <iostream>

class Counter
{
public:
    Counter() : count{ 1 } {};

    Counter(int count)
    {
        this->count = count;
    }

    void increment() 
    {
        this->count++;
    }

    void decrement() 
    {
        this->count--;
    }

    int currentValue() const
    {
        return this->count;
    }

private:
    int count;
};

void workCounter(Counter& counter)
{
    char symb = ' ';
    while (symb != 'x')
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> symb;
        switch (symb)
        {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            std::cout << counter.currentValue() << std::endl;
            break;
        case 'x':
            std::cout << "До свидания!";
            break;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    std::string answer = "";
    int count;

    while (!(answer == "yes" || answer == "no"))
    {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no:\n";
        std::cin >> answer;
    }

    if (answer == "yes")
    {
        std::cout << "Введите начальное значение счётчика:";
        std::cin >> count;
        Counter counter(count);
        workCounter(counter);
    }
    else if (answer == "no")
    {
        Counter counter;
        workCounter(counter);
    }

}
