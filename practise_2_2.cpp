#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
// using std::cin;
// using std::cout;

int sum = 0;
int global_max = INT_MIN;

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
        if (temp->value > global_max)
        {
            global_max = temp->value;
        }

        // cout << temp->value << " ";
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
    for (Group *i = head; i->next != NULL; i = i->next)
    {
        for (Group *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }

    print_link_list(head);
    cout << global_max << endl;

    return 0;
}
