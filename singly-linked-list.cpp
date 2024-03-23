#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};
int main()
{
    Node *ptr = NULL;
    Node *HEAD = new Node();
    HEAD->data= 25;
    HEAD->next=NULL;

    ptr=HEAD;

    Node *current = new Node();
    current->data = 67;
    current->next = NULL;
    HEAD->next = current;

    current = new Node();
    current->data = 29;
    current->next = NULL;
    HEAD->next->next = current;

    current = new Node();
    current->data = 97;
    current->next = NULL;
    HEAD->next->next->next = current;

    while(ptr != NULL)
    {
        cout<<ptr->data<<"  "<<ptr->next<<endl;
        ptr=ptr->next;
    }

    return 0;
}