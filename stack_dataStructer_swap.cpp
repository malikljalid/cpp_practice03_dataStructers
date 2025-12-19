#include <iostream>
#include <stack>


int main()
{

    std::stack <int> MyStack1;
    std::stack <int> MyStack2;

    MyStack1.push(10);
    MyStack1.push(20);
    MyStack1.push(30);
    MyStack1.push(40);


    MyStack2.push(50);
    MyStack2.push(60);
    MyStack2.push(70);
    MyStack2.push(80);

    MyStack2.swap(MyStack1);

    std::cout << "MyStack1 = ";
    while (!MyStack1.empty()) {
        std::cout << MyStack1.top() << " ";
        MyStack1.pop();
    }

    std::cout << std::endl << "MyStack2 = ";
    while (!MyStack2.empty()) {
        std::cout << MyStack2.top() << " ";
        MyStack2.pop();
    }

    return (0);
}
