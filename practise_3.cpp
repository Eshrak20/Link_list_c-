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
        temp = temp->next;
    }
    Group *temp_2 = head;
    Group *temp_1 = head;

    if (sum % 2 == 0)
    {

        for (int i = 1; i < (sum / 2); i++)
        {
            temp_1 = temp_1->next;
        }
        for (int i = 1; i < (sum / 2) + 1; i++)
        {
            temp_2 = temp_2->next;
        }
        cout << temp_1->value << " ";
        cout << temp_2->value << " ";
    }
    else
    {
        for (int i = 1; i < (sum / 2) + 1; i++)
        {
            temp_2 = temp_2->next;
        }
        cout << temp_2->value << " ";
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
    return 0;
}
