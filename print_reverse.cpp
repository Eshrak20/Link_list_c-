#include <stdio.h>
#include <iostream>
using namespace std;
class Group
{
public:
    int value;
    Group *next;
    Group(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void print_at_tail(Group *&head, int val)
{
    Group *newNode = new Group(val);
    Group *temp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    temp->next = newNode;
};
void reverse(Group *head)
{
    if (head == NULL)
    {
        return;
    }
    reverse(head->next);
    cout << head->value << " ";
}
void print_list_link(Group *head)
{
    Group *temp = head;
    while (temp != NULL)
    {

        print_list_link(head);
        temp = temp->next;
        cout << temp->value << " ";
    }
};
int main()
{
    int n;
    Group *head = NULL;
    while (true)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        print_at_tail(head, n);
    }
    // print_list_link(head);
    reverse(head);
    cout << endl;

    return 0;
}