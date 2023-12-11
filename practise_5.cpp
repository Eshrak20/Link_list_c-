#include <stdio.h>
#include <iostream>
using namespace std;
int sum = 0;
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
void Insert_value(Group *&head, int value)
{

    Group *newNode = new Group(value);
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
}
void print_link_list(Group *head)
{

    Group *temp = head;
    cout << "Link list : ";

    while (temp != NULL)
    {
        sum++;
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
};
int main()
{
    int input;
    Group *head = NULL;
    while (true)
    {

        cin >> input;
        if (input == -1)
        {
            break;
        }

        Insert_value(head, input);
    }
    print_link_list(head);
    cout << sum << " " << endl;
    return 0;
}
