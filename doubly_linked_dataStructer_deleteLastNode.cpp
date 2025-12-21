#include <iostream>

class clsNode
{
    private:
    int      _value;
    clsNode *_next;
    clsNode *_prev;

    public:
    int getValue(void)
    {
        return (_value);
    }

    clsNode *getNext(void)
    {
        return (_next);
    }

    clsNode *getPrev(void)
    {
        return (_prev);
    }

    void setValue(int value)
    {
        _value = value;
    }

    void setNext(clsNode *adress)
    {
        _next = adress;
    }

    void setPrev(clsNode *adress)
    {
        _prev = adress;
    }

    static void insertAtBeginning(clsNode* &head, int value) 
    {
        clsNode *new_node = new clsNode();

        if (head != NULL)
            head->setPrev(new_node);

        new_node->setValue(value);
        new_node->setNext(head);
        new_node->setPrev(NULL);

        head = new_node;
    }

    static void insertAfter(clsNode* prev_node, int value)
    {
        if (prev_node == NULL)
        {
            std::cout << "the given previous node cannot be NULL";
            return;
        }

        clsNode* new_node = new clsNode();

        new_node->setValue(value);
        new_node->setNext(prev_node->getNext());
        new_node->setPrev(prev_node->getPrev());

        prev_node->setNext(new_node);
    }

    static void insertAtEnd(clsNode* head, int value)
    {
        clsNode* newNode = new clsNode();

        newNode->setValue(value);
        newNode->setNext(NULL);

        if (head == NULL)
        {
            newNode->setPrev(NULL);
            head = newNode;
        }
        else
        {
            clsNode* current = head;

            while (current->getNext() != NULL)
            {
                current = current->getNext();
            }

            current->setNext(newNode);
            newNode->setPrev(current);
        }
    }

    static void deleteNode(clsNode* &head, clsNode* &NodeToDelete)
    {

        if (head == NULL || NodeToDelete == NULL)
            return;

        if (head == NodeToDelete)
            head = NodeToDelete->getNext();

        if (NodeToDelete->getNext() != NULL)
            NodeToDelete->getNext()->setPrev(NodeToDelete->getPrev());

        if (NodeToDelete->getPrev() != NULL)
            NodeToDelete->getPrev()->setNext(NodeToDelete->getNext());

        delete NodeToDelete;
    }

    static void deleteFirstNode(clsNode* &head)
    {
        if (head == NULL)
            return;

        clsNode* temp = head;
        head = head->getNext();
    
        if (head != NULL)
            head->setPrev(NULL);

        delete temp;
    }

    static void deleteLastNode(clsNode*& head)
    {
        if (head == NULL)
            return;

        if (head->getNext() == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        clsNode *current = head;
        while (current->getNext()->getNext() != NULL)
        {
            current = current->getNext();
        }

        clsNode *temp = current->getNext();
        current->setNext(NULL);

        delete temp;
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

    void printNodeDetails(clsNode* head)
    {
        if (head->getPrev() != NULL)
            std::cout << head->getPrev()->getValue();
        else
            std::cout << "NULL";

        std::cout << " <--> " << head->getValue() << " <--> ";

        if (head->getNext() != NULL)
            std::cout << head->getNext()->getValue() << "\n";
        else
            std::cout << "NULL";

    }

    void printListDetails(clsNode* head)
    {
        std::cout << "\n\n";
        while (head != NULL) {
            printNodeDetails(head);
            head = head->getNext();
        }
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

    clsNode::insertAfter(node2, 1);
    clsNode::printList(head);

    clsNode::insertAtEnd(head, 99);
    clsNode::printList(head);

    clsNode::deleteNode(head, node2);
    clsNode::printList(head);

    clsNode::deleteFirstNode(head);
    clsNode::printList(head);

    clsNode::deleteLastNode(head);
    clsNode::printList(head);

    return (0);
}
