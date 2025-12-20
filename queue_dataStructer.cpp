#include <iostream>
#include <queue>

int main(void)
{
    std::queue <int> quNumbers;

    quNumbers.push(20);
    quNumbers.push(13);
    quNumbers.push(6);

    std::cout << "Queue elements count : " << quNumbers.size() << std::endl;
    std::cout << "Queue front : " << quNumbers.front() << std::endl;
    std::cout << "Queue back  : " << quNumbers.back()  << std::endl;

    std::cout << "\n\nQueue content : " << std::endl;
    while (quNumbers.empty() == false)
    {
        std::cout << quNumbers.front() << std::endl;

        quNumbers.pop();
    }

    return (0);
}
