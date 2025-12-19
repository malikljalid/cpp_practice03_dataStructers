#include <iostream>
#include <stack>


int main(void)
{
    std::stack <int>    stkNumbers;

    stkNumbers.push(6);
    stkNumbers.push(13);
    stkNumbers.push(20);

    while (stkNumbers.empty() == false)
    {
        std::cout << stkNumbers.top() << std::endl;

        stkNumbers.pop();
    }

    return (0);
}
