#include <stdio.h>
#include <iostream>
using namespace std;
int sum = 0;
int sum_2 = 0;
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
void Input_link_list_1(Group *&head, int val)
{
    Group *newNode = new Group(val);
    Group *tmp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void Input_link_list_2(Group *&head, int val)
{
    Group *newNode = new Group(val);
    Group *tmp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
//...................................................

void print_link_list_1(Group *head)
{

    Group *temp = head;
    cout << "Link list 1 : ";

    while (temp != NULL)
    {
        sum++;
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
};

void print_link_list_2(Group *head)
{

    Group *temp = head;
    cout << "Link list 2 : ";

    while (temp != NULL)
    {
        sum_2++;
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
};
int main()
{
    int input_1, input_2;
    Group *head = NULL;
    Group *head_2 = NULL;

    while (true)
    {
        cin >> input_1;
        if (input_1 == -1)
        {
            break;
        }
        Input_link_list_1(head, input_1);
    }
    while (true)
    {
        cin >> input_2;
        if (input_2 == -1)
        {
            break;
        }
        Input_link_list_2(head_2, input_2);
    }
    print_link_list_1(head);
    print_link_list_2(head_2);
    if (sum == sum_2)
    {
        cout << "Size are same : YES" << endl;
    }
    else
    {
        cout << "Size are same : NO" << endl;
    }

    return 0;
}