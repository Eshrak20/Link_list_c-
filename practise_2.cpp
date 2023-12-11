#include <stdio.h>
#include <iostream>
using namespace std;
int sum = 0;
int duplicate = 0;

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

    while (temp != NULL)
    {
        Group *temp_2 = temp;
        while (temp_2->next != NULL)
        {
            if (temp_2->next->value == temp->value)
            {
                duplicate++;
            }
            temp_2 = temp_2->next;
        }

        temp = temp->next;
    }
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
    cout << duplicate << " " << endl;
    if (duplicate > 0)
    {
        cout << "Yes"
             << " " << endl;
    }
    else
    {
        cout << "NO"
             << " " << endl;
    }

    return 0;
}
