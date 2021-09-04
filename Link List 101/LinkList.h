#include <iostream>
using namespace std;
class LinkList
{
public:
    //structure of node
    struct node
    {
        int value;
        node* next;
    };
    //Display the nodes from the begining to the end
    void display(node* first)
    {
        while (first)
        {
            cout << first->value << endl;
            first = first->next;
        }
    }
    //display the nodes from the begining to the end recursively
    void displayRecursively(node* first)
    {
        if (first != NULL)
        {
            cout << (first)->value << endl;
            displayRecursively(first->next);
        }
    }
    //display the nodes from the last one to the first one recursively
    void displayRecursivelyBackward(node* first)
    {
        if (first != NULL)
        {
            displayRecursivelyBackward(first->next);
            cout << first->value << endl;
        }
    }
    //Counting the number of the nodes in a link list
    int count(node* first)
    {
        int result = 0;
        while (first != NULL)
        {
            result++;
            first = first->next;
        }
        return result;
    }
    //Counting the number of the nodes in a link list recursively
    int countRecursively(node* first)
    {
        if (first != NULL)
        {
            return countRecursively(first->next) + 1;

        }
        else
            return 0;
    }
    //Add to the end of a link list
    void push(node** head, int data)
    {
        //defining a new node and assigning the values
        node* newNode = new node;
        newNode->value = data;
        newNode->next = NULL;
        node* temp = (*head);
        //check if the node is empty
        if (*head == NULL)
        {
            *head = newNode;
        }
        else
        {
            while ((temp->next)) //traverse the link to the end to do the addition
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    //Add at the begining of a link list
    void addBegin(node** fisrt, int data)
    {
        node* newNode = new node();
        newNode->value = data;
        newNode->next = NULL;
        if (*fisrt != NULL) // if it is not null the first node has to point to the place that head points
        {
            newNode->next = *fisrt;
        }
        (*fisrt) = newNode;
    }
    //Add at the specific position
    void insertAtpos(node** first, int data, int position)
    {
        node* temp = *first;
        node* newNode = new node();
        newNode->value = data;
        newNode->next = NULL;
        if (*first == NULL || position > count(*first) || position < 0)
        {
            cout << "Can not add in this position" << position << endl;
            return;
        }
        if (position == 0) //adding to the begining of a link list
        {
            newNode->next = (*first);
            (*first) = newNode;
        }
        else
        {
            for (int i = 1; i < position - 1; i++)//counting the node starts from 0
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }

    }
    //adding a node to end of a link list
    void pushNode(node** head, node* newNode)
    {
        if ((*head) == NULL)
        {
            (*head) = newNode;
        }
        else
        {
            node* temp = *head;
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
        }
    }
    //insert after specific node in a link list
    void insertAfter(node* previousNode, int data)
    {
        //if the previous node is empty there is nothing to insert after that
        if (previousNode == NULL)
        {
            return;
        }
        node* newNode = new node();
        newNode->value = data;
        newNode->next = (previousNode)->next;
        (previousNode)->next = newNode;


    }
    //sum of all the elements in a link list
    int sumAllElements(node* first)
    {
        int result = 0;
        while (first)
        {
            result += first->value;
            first = first->next;
        }
        return result;
    }
    //sum of all the elements in a link list recursively
    int sumAllElementsRecursivelyy(node* first)
    {
        if (first)
            return sumAllElementsRecursivelyy(first->next) + first->value;

        else
            return 0;
    }
    //maximum elements in a link list
   /*int maxElement(node* first)
    {
        int max = -606; //error number
        if (first) //if the link list is not empty
        {
            max = first->value; //max is equal to the first value of the link list
            while (first->next)
            {
                if (max < first->next->value) //the comparison starts from the second element in the link list
                    max = first->next->value;
                first->next = first->next->next;
            }
        }
        return max;
    }*/
    //Linear search
    node* linearSearch(node* first, int key)
    {
        while (first)
        {
            if (first->value != key)
                first = first->next;
            else
                return first;
        }
        return NULL;
    }
    //Linear search Recursively
    node* linearSearchRecursively(node* first, int key)
    {
        if (first == NULL)
            return NULL;

        if (key == first->value)
            return first;

        return linearSearchRecursively(first->next, key);


    }
    //insert into a sorted list
    void insertIntoSortedList(node** first, int data)
    {
        node* newNode = new node();
        newNode->value = data;
        newNode->next = NULL;
        if (*first == NULL) //if the link list is empty
        {
            (*first) = newNode;
        }
        else if ((*first)->value > data) //if the data smaller than the first value
        {
            newNode->next = (*first);
            (*first) = newNode;
        }
        else
        {
            node* temp = *first;
            while (temp->next && temp->next->value < data)
            {
                temp = temp->next;

            }
            if (temp->next)
                newNode->next = temp->next;
            else
                newNode->next = NULL;
            temp->next = newNode;
        }

    }
    //delete a first node in a link list
    int deleteFirstNode(node** first)
    {
        int deletedValue = -666;
        node* temp = *first;
        if (*first == NULL) //if a link list is empty
        {
            return deletedValue;//special code to show there is nothing to delete
        }
        else if ((*first)->next == NULL)
        {
            deletedValue = (*first)->value;
            delete(*first);
            return deletedValue;
        }
        else
        {
            deletedValue = (*first)->value;
            (*first) = temp->next;
            delete(temp);
            return deletedValue;
        }

    }
    //delete a last node in a link list
    int pop(node** first)
    {
        node* temp = *first;
        int deletedValue = INT16_MAX;
        if (*first == NULL) //if a link list is empty
        {
            return deletedValue;//special code to show there is nothing to delete
        }
        else if ((*first)->next == NULL)
        {
            deletedValue = (*first)->value;
            delete(*first);
            return deletedValue;
        }
        else
        {
            while (temp->next->next)
            {
                temp = temp->next;
            }
            deletedValue = temp->next->value;
            delete(temp->next);
            temp->next = NULL;
            return deletedValue;

        }

    }
    //delete a node in specific position
    int deletePosition(node** first, int pos)
    {
        int deletedValue = -666;
        node* temp = *first;
        if (*first == NULL || pos < 1 || pos > count(*first)) //if the node is empty or position is out of a range
        {
            return deletedValue;
        }
        else if (temp->next == NULL) //if there is only one node
        {
            deletedValue = temp->value;
            delete(temp->next);
            return deletedValue;
        }
        else if (pos == 1) //if the pos ==1
        {
            (*first) = temp->next;
            deletedValue = temp->value;
            delete(temp);
            return deletedValue;
        }
        else
        {
            for (int i = 1; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            node* d = temp->next;
            deletedValue = temp->next->value;
            if (temp->next)
                temp->next = temp->next->next;
            else
                temp->next = NULL;
            delete(d);
            return deletedValue;
        }

    }
    //check to see if a link list is sorted
    bool isSorted(node* first)
    {
        if (first == NULL || first->next == NULL)
            return true;
        else
        {
            node* temp = first;
            while (temp->next)
            {
                if (temp->next->value > temp->value)
                    temp = temp->next;
                else
                    return false;
            }
            return true;
        }
    }
    //remove duplicate node in a sorted link list
    void removeDuplicate(node** first)
    {
        if (*first == NULL) //if link list is empty
            return;
        else
        {
            node* prior = *first;
            node* temp = prior->next;

            while (temp)
            {

                if (prior->value == temp->value) //if it is repeated
                {
                    prior->next = temp->next;
                    delete(temp);
                }
                else //prior pointer only moves when temp is not equal to it but temp is moving either or
                {
                    prior = prior->next;

                }
                temp = prior->next;

            }
        }
    }
    //reverse a link list
    node* reverseLinkList(node* first)
    {
        if (first == NULL)//if link list is empty
            return NULL;
        else
        {

            node* p1 = NULL;
            node* p2 = NULL;
            node* temp = first;
            while (temp)
            {
                p2 = p1;
                p1 = temp;
                temp = temp->next;
                p1->next = p2;
            }
            return p1;
        }
    }
    //Concatenating two link list
    node* concat(node* first, node* second)
    {
        if (first == NULL && second == NULL) //if they are both empty
            return NULL;
        else if (first == NULL)
            return second;
        else if (second == NULL)
            return first;
        else
        {
            node* temp = first;
            while (temp->next)
                temp = temp->next;
            temp->next = second;
            return first;
        }
    }
    //merging two sorted link list
    node* merge(node* first, node* second)
    {
        if (first == NULL && second == NULL)
            return NULL;
        else if (first == NULL)
            return second;
        else if (second == NULL)
            return first;
        else
        {
            node* head = NULL;
            node* last = NULL;
            if (first->value <= second->value)
            {
                head = last = first;
                last->next = NULL;
                first = first->next;
            }
            else
            {
                head = last = second;
                last->next = NULL;
                second = second->next;
            }
            while (first && second)
            {
                if (first->value < second->value)
                {
                    last->next = first;
                    last = first;
                    first = first->next;
                    last->next = NULL;
                }
                else
                {
                    last->next = second;
                    last = second;
                    second = second->next;
                    last->next = NULL;
                }
            }
            if (first != NULL)
                last->next = first;
            else
                last->next = second;
            return head;
        }
    }
    //if a link list has a loop or not
    bool isLoop(node* first)
    {
        if (first == NULL)
            return false;
        else
        {
            node* p = new node();
            node* q = new node();
            p = q = first;
            do
            {
                p = p->next;
                q = q->next;
                if (q != NULL)
                    q = q->next;
                else
                    q = NULL;
            } while (p && q && p != q);
            if (p == q)
                return true;
            else
                return false;
        }
    }
};
#pragma once
