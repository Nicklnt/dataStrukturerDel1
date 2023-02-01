#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    int nodeNumber;
    Node *next;

    // Default constructor
    Node()
    {
    }

    // Constructor with data
    Node(int data)
    {
        this->data = data;
    }
};

class Storage
{
public:
    Node *head;
    Node *tail;

    /** Default constructor
     *
     */
    Storage()
    {
    }

    /** Create a Node to hold the data, then put it at the head of the list.
     * @param data The data for the new node
     */
    void push(int data)
    {
        static int counter = 0;
        Node *pN = new Node;
        if (counter == 0)
        {
            pN->next = NULL;
            head = pN;
            tail = pN;
            pN->data = data;
            ++counter;
            pN->nodeNumber = counter;
        }
        else
        {
            pN->next = head;
            head = pN;
            pN->data = data;
            ++counter;
            pN->nodeNumber = counter;
        }
    }

    /** Remove the head Node and return its data.
     *
     * @param [out] The data (only valid if return true)
     * @return True if there is a node to return
     */
    bool pop()
    {
        if (head)
        {
            Node *pHead = head;

            head = pHead->next;

            delete pHead;
            pHead = 0;
            cout << "The first node has been deleted" << endl;
            return 1;
        }
        else
        {
            cout << "Node not found it" << endl;
            return 0;
        }
    }

    /**
     * Return the data from the head Node, without removing it.
     *
     * @param [out] The data (only valid if return true)
     * @return True if text has been returned successfully (there is a node)
     */
    bool peek()
    {
        if (head)
        {
            cout << "the value of the data saved in the first node is " << head->data << endl;
            return 1;
        }
        else
        {
            cout << "node not found it" << endl;
            return 0;
        }
    }

    /**
     * Return True if the list is empty, otherwise False
     *
     * @return True if the list is empty, otherwise False
     */
    bool isEmpty()
    {
        cout << "node doesn't exist" << endl;
        return 1;
    }

    /**
     * Swaps the nodes at position i and j.
     *
     * @return Returns true if successful, otherwise false (e.g. outside range)
     */
    /**  Frivillig, avkommentera om du implementerar. Avkommentera även i test_storage.cpp
    bool swap(int i, int j);
    */
    void swap(int nodeNumber1, int nodeNumber2)
    {

        for (Node *pHead1 = head; pHead1 != NULL; pHead1 = pHead1->next)
        {

            if (pHead1->nodeNumber == nodeNumber1)
            {
                for (Node *pHead2 = head; pHead2 != NULL; pHead2 = pHead2->next)
                {

                    if (pHead2->nodeNumber == nodeNumber2)
                    {
                        int temp = pHead1->data;
                        pHead1->data = pHead2->data;
                        pHead2->data = temp;
                    }
                }
            }
        }
    }
};

main()
{
    Storage *s = new Storage();
    s->push(1);
    s->push(2);
    s->push(3);

    s->pop();

    if (s->head)
    {
        s->peek();
    }
    else
    {
        s->isEmpty();
    }

    s->swap(1, 2);
    s->peek();
}
