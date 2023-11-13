#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int node;
    Node *next;
    Node(int node)
    {
        this->node = node;
        next = nullptr;
    }
};
class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }
    void insert(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            /* code */
        }
        else
        {
            Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
                /* code */
            }
            temp->next = newNode;
        }
    }
    void reverse()
    {
        Node *pre = NULL;
        Node *cur = head;
        Node *nxt = nullptr;

        while (cur)
        {
            nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        head = pre;
    }
    void display()
    {
        Node *temp = head;
        try
        {
            while (temp)
            {
                cout << temp->node << " ";
                temp = temp->next;
                /* code */
                // cout << "hii";
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    // Node head(3);
    LinkedList l1;
    l1.insert(34);
    l1.insert(1);
    l1.insert(3);
    l1.display();
    l1.reverse();
    l1.display();

    cout << "\n hello";

    return 0;
}
