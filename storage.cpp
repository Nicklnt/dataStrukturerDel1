#include "storage.h"
#include <iostream>

using namespace std;

/** Create a Node to hold the data, then put it at the head of the list.
 * @param text The data for the new node
*/
void Storage::push(int data)
{
    Node *newNode = new Node(data);
    if(head == NULL)
    {
        head = newNode;
        newNode->next = NULL;
        
    }
    else
    {
        newNode->next =head;
        head = newNode;
    }

    // Implementera här
}

/** Remove the head Node and return its data.
 * 
 * @param [out] The data (only valid if return true)
 * @return True if there is a node to return
*/
bool Storage::pop(int &data) {

    if(head== NULL)
    {
        return false;
    }
    else
    {
        Node *current = head;
        head = current->next;
        data = current->data;
        delete current;
        current = 0;
        
    }
    // Implementera här
    return true;
    
}

/**
 * Return the data from the head Node, without removing it.
 * 
 * @param [out] The data (only valid if return true)
 * @return True if text has been returned successfully (there is a node)
*/
bool Storage::peek(int &data) {
    if(head == NULL)
    {
        return false;
    }
    else
    {
        data = head->data;
    }
    // Implementera här
    return true;
}

/**
 * Return True if the list is empty, otherwise False 
 * 
 * @return True if the storage is empty
*/
bool Storage::isEmpty() {
    if (head != NULL)
    {
        return false;
    }
    // Implementera här
    return true;
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

