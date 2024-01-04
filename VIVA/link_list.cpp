#include <iostream>
using namespace std;
class Node
{
private:
    int data;

public:
    class Node *next;
    void setData()
    {
        cout << "Enter the data to insert in the link list: ";
        cin >> data;
    }
    int showData()
    {
        cout << data;
    }
};
class Node *traversal(class Node *root)
{
    class Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->showData() << endl;
        temp = temp->next;
    }
    return root;
}

class Node *insertAtFirst(class Node *root)
{
    class Node *temp = root;
    class Node *ptr = new Node;
    ptr->setData();
    ptr->next = root;
    root = ptr;
    return root;
}

int main()
{
    class Node *root = new Node;
    class Node *second = new Node;
    class Node *third = new Node;
    class Node *fourth = new Node;

    root->setData();
    root->next = second;

    second->setData();
    second->next = third;

    third->setData();
    third->next = fourth;

    fourth->setData();
    fourth->next = NULL;

    root = traversal(root);
    root = insertAtFirst(root);
    cout << endl;
    root = traversal(root);

    return 0;
}