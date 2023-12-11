#include <stdio.h>
#include <iostream>
using namespace std;
int flag = 1;
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

void Insert_at_pos(Group *&head, int pos, int val)
{
    Group *temp = head;

    if (pos == 0)
    {
        Group *newNode = new Group(val);
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Group *newNode = new Group(val);
        for (int i = 1; i <= pos - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "Invalid" << endl;
                flag = 0;
                return;
            }
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void Print_link_list(Group *head)
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
    int input_que;
    int position, value;

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
    cout << "Input the que value" << endl;

    cin >> input_que;
    for (int i = 0; i < input_que; i++)
    {
        cout << "Insert position and value" << endl;

        cin >> position;
        cin >> value;
        Insert_at_pos(head, position, value);
    }
    if (flag == 1)
    {
        Print_link_list(head);
    }

    return 0;
}
