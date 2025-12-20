#include <iostream>
#include <queue>

int main(void)
{
    std::queue <int> quNumbers1;
    std::queue <int> quNumbers2;

    quNumbers1.push(20);
    quNumbers1.push(13);
    quNumbers1.push(6);

    quNumbers2.push(2001);
    quNumbers2.push(2019);
    quNumbers2.push(2025);

    quNumbers1.swap(quNumbers2);

    std::cout << "\n\nQueue1 content : " << std::endl;
    while (quNumbers1.empty() == false)
    {
        std::cout << quNumbers1.front() << std::endl;

        quNumbers1.pop();
    }

    std::cout << "\n\nQueue2 content : " << std::endl;
    while (quNumbers2.empty() == false)
    {
        std::cout << quNumbers2.front() << std::endl;

        quNumbers2.pop();
    }

    return (0);
}
