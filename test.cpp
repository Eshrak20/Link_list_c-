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
void Insert_at_tail(Group *&head, int value)
{
    Group *newNode = new Group(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Group *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp ekhon last node e ;
    temp->next = newNode;
}
void print_link_list(Group *head)
{
    Group *temp = head;
    cout << "Link list : ";

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Group *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print" << endl;

        int option;
        cin >> option;
        if (option == 1)
        {
            int v;
            cin >> v;
            Insert_at_tail(head, v);
        }
        else if (option == 2)
        {
            print_link_list(head);
        }
    }

    return 0;
}