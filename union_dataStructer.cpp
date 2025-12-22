#include <iostream>

union unTools
{
    char        Sex;
    int         Age;
    double      Salary;
};

int main(void)
{
    unTools tool;

    tool.Age = 10;
    std::cout << tool.Age << std::endl;

    tool.Salary = 5000.0;
    std::cout << tool.Salary << std::endl;

    tool.Sex = 'M';
    std::cout << tool.Sex << std::endl;

    return (0);
}
