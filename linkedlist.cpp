#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
};
class list
{
private:
node *head, *tail;
public:
list()
{
head = NULL;
tail = NULL;
}
void createnode(int value)
{
node *temp = new node;
temp->data = value;
temp->next = NULL;
if(head == NULL)
{
head = temp;
tail = temp;
temp = NULL;
}
else
{
tail -> next = temp;
tail = temp;
}
}
};
