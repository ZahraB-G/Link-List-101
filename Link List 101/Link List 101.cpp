#include <iostream>
using namespace std;
#include "LinkList.h"
int main()
{
    LinkList obj;
    LinkList::node** head = new LinkList::node * ();

    cout << "Testing the push and display function" << endl;
    obj.push(head, 2);
    obj.push(head, 2);
    obj.push(head, 3);
    obj.push(head, 5);
    obj.push(head, 10);
    obj.push(head, 7589);
    obj.display(*head);
    cout << "___________________________" << endl;
    cout << "Testing the insertAfter function" << endl;
    LinkList::node* test = new LinkList::node();
    test->value = 666;
    obj.pushNode(head, test);
    //push(head, 50);
    obj.insertAfter(test, 6000);
    obj.display(*head);
    cout << "___________________________" << endl;
    cout << "Testing the displayRecursively function" << endl;
    obj.displayRecursively(*head);
    cout << "___________________________" << endl;
    cout << "Testing the displayRecursivelyBackward function" << endl;
    obj.displayRecursivelyBackward(*head);
    cout << "___________________________" << endl;
    cout << "Testing the Count number of the nodes function" << endl;
    cout << obj.count(*head) << endl;
    cout << "___________________________" << endl;
    cout << "Testing the Count number of the nodes in recursive function" << endl;
    cout << obj.countRecursively(*head);

    cout << "___________________________" << endl;
    cout << "Testing the sum of all elements function" << endl;
    cout << obj.sumAllElements(*head) << endl;

    cout << "___________________________" << endl;
    cout << "Testing the sum of all elements recursively function" << endl;
    cout << obj.sumAllElementsRecursivelyy(*head) << endl;
    cout << "___________________________" << endl;
    cout << "Testing the max function" << endl;
    //cout << obj.maxElement(temp) << endl;
    cout << "___________________________" << endl;
    cout << "Testing the search function" << endl;
    if (obj.linearSearch(*head, 998))
        cout << obj.linearSearch(*head, 998)->value << " find the node" << endl;
    else
        cout << "Could not find the node" << endl;
    cout << "Testing the search function" << endl;
    if (obj.linearSearch(*head, 7589))
        cout << obj.linearSearch(*head, 7589)->value << " find the node" << endl;
    else
        cout << "Could not find the node" << endl;
    cout << "___________________________" << endl;
    cout << "Testing the search  function recursively" << endl;

    if (obj.linearSearchRecursively(*head, 10))
        cout << obj.linearSearchRecursively(*head, 10)->value << " find the node" << endl;
    else
        cout << "Could not find the node" << endl;
    cout << "___________________________" << endl;
    cout << "Testing the addBegin  function" << endl;
    obj.addBegin(head, 55);
    obj.display(*head);
    cout << "___________________________" << endl;
    cout << "Testing the insert at the specific position  function" << endl;
    obj.insertAtpos(head, 69, 0);
    obj.display(*head);
    cout << "___________________________" << endl;
    cout << "Testing the insert into a sorted link list  function" << endl;
    LinkList tst;
    LinkList::node** temp = new LinkList::node * ();
    tst.push(temp, 2);
    tst.push(temp, 4);
    tst.push(temp, 6);
    tst.insertIntoSortedList(temp, 1);
    tst.insertIntoSortedList(temp, 3);
    tst.insertIntoSortedList(temp, 5);
    tst.insertIntoSortedList(temp, 7);
    tst.display(*temp);
    cout << "___________________________" << endl;
    cout << "Testing delete a first node   function" << endl;
    cout << "Delted Value " << tst.deleteFirstNode(temp) << endl;
    cout << "Deleted Value " << tst.deleteFirstNode(temp) << endl;
    tst.display(*temp);
    cout << "___________________________" << endl;
    cout << "Testing delete a last node   function" << endl;
    cout << "Deleted Value " << tst.pop(temp) << endl;
    tst.display(*temp);
    cout << "___________________________" << endl;
    cout << "Testing delete a node at a specific position function" << endl;
    cout << "Deleted Value " << tst.deletePosition(temp, 1) << endl;
    tst.display(*temp);
    cout << "___________________________" << endl;
    cout << "Testing a link list to be sorted" << endl;
    tst.display(*temp);
    if (tst.isSorted(*temp))
        cout << "Link List is sorted" << endl;
    else
        cout << "Link List is not sorted" << endl;
    cout << "__________________________" << endl;
    obj.display(*head);
    if (obj.isSorted(*head))
        cout << "Link List is sorted" << endl;
    else
        cout << "Link List is not sorted" << endl;
    cout << "___________________________" << endl;
    cout << "Testing  removing duplicate node in a sorted link list function" << endl;
    tst.insertIntoSortedList(temp, 4);
    tst.insertIntoSortedList(temp, 4);
    tst.insertIntoSortedList(temp, 4);
    tst.insertIntoSortedList(temp, 4);
    tst.insertIntoSortedList(temp, 6);
    tst.insertIntoSortedList(temp, 6);
    tst.insertIntoSortedList(temp, 5);
    tst.insertIntoSortedList(temp, 5);
    tst.insertIntoSortedList(temp, 5);
    tst.display(*temp);
    cout << "__________________________" << endl;
    tst.removeDuplicate(temp);
    tst.display(*temp);
    cout << "___________________________" << endl;
    cout << "Testing  reverse a  link list function" << endl;
    LinkList::node* p = new LinkList::node();
    p = tst.reverseLinkList(*temp);
    tst.display(p);
    cout << "___________________________" << endl;
    cout << "Testing  concantenating two link list function" << endl;
    p = tst.concat(*head, p);
    tst.display(p);
    cout << "___________________________" << endl;
    cout << "Testing  concantenating two link list function" << endl;
    if (tst.isLoop(p))
        cout << "It is a loop" << endl;
    else
        cout << "It is not a loop" << endl;
}
