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

    static void insertAtBeginning(clsNode* &head, int value) 
    {
        clsNode *new_node = new clsNode();

        new_node->_value = value;
        new_node->_next = head;

        head = new_node;
    }

    static clsNode *find(clsNode* head, int value)
    {
        while (head != NULL)
        {
            if (head->getValue() == value)
                return (head);

            head = head->getNext();
        }

        return (NULL);
    }

    static void printList(clsNode* head)
    {
        while (head != NULL)
        {
            std::cout << head->_value << " ";
            head = head->_next;
        }

        std::cout << "\n";
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
    clsNode::printList(head);

    clsNode::insertAtBeginning(head, 42);
    clsNode::printList(head);

    std::cout << "Value found is : " << clsNode::find(head, 6)->getValue() << std::endl;

    return (0);
}
