#include <iostream>

class clsNode
{
    private:
    int      _value;
    clsNode *_next;

    public:
    int getValue(void)
    {
        return (_value);
    }

    clsNode *getNext(void)
    {
        return (_next);
    }

    void setValue(int value)
    {
        _value = value;
    }

    void setNext(clsNode *adress)
    {
        _next = adress;
    }
};

int main(void)
{
    clsNode *head = NULL;

    clsNode *node1 = new clsNode();
    clsNode *node2 = new clsNode();
    clsNode *node3 = new clsNode();

    node1->setValue(13);
    node2->setValue(20);
    node3->setValue(6);

    node1->setNext(node2);
    node2->setNext(node3);
    node3->setNext(NULL);

    head = node1;
    while (head != NULL)
    {
        std::cout << head->getValue() << std::endl;

        head = head->getNext();
    }

    return (0);
}
