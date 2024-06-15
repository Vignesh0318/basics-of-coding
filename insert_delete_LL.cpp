#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
int getsize(Node *start)
{
    Node *ptr = start;
    int count = 0;
    while (ptr != NULL)
    {
        count = count + 1;
        ptr = ptr->next;
    }
    return count;
}

void addmiddle(Node *start, int mid, Node *vignesh)
{
    Node *curr = start;
    Node *prev = NULL;
    while (mid)
    {
        prev = curr;
        curr = curr->next;
        mid = mid - 1;
    }
    prev->next = vignesh;
    vignesh->next = curr;
}
void del_mid_node(Node *head, int mid)
{
    Node *itr = head;

    int count1 = 1;
    while (count1 < mid)
    {
        count1 = count1 + 1;
        itr = itr->next;
    }
    Node *mid_next_add = itr->next;

    itr = head;
    int count2 = 1;
    while (count2 < mid - 1)
    {
        count2 = count2 + 1;
        itr = itr->next;
    }
    Node *mid_before_add = itr;

    mid_before_add->next = mid_next_add;
}
void del_end_node(Node *head, int size)
{
    Node *ptr = head;
    int count = 0;
    while (count < size - 2)
    {
        count++;
        ptr = ptr->next;
    }
    ptr->next = NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        cout << "Press 1 to insert 2 to delete 3 to print or any other key to exit" << endl;
        int user_input;
        cin >> user_input;
        if (user_input == 1)
        {
            cout << "Enter value of node" << endl;
            int val;
            cin >> val;
            Node *vignesh = new Node;
            cout << "Press 1 to at beg , 2 to middle ,3 at end" << endl;
            int in_input;
            cin >> in_input;
            vignesh->data = val;
            vignesh->next = NULL;
            if (in_input == 1)
            {
                if (head == NULL)
                {
                    head = vignesh;
                    tail = vignesh;
                }
                else
                {
                    vignesh->next = head;

                    head = vignesh;
                }
            }
            else if (in_input == 2)
            {
                int size = getsize(head);
                int mid;
                if (size % 2 == 0)
                {
                    mid = size / 2;
                }
                else
                    mid = size / 2 + 1;
                addmiddle(head, mid, vignesh);
            }
            else if (in_input == 3)
            {
                tail->next = vignesh;
                tail = vignesh;
            }
        }
        else if (user_input == 2)
        {
            int val;
            cout << "Press 1 to delete 1st number , 2 to middle number , 3 to ending number";
            cin >> val;

            if (val == 1)
            {
                head = head->next;
            }

            else if (val == 2)
            {
                int size = getsize(head);
                int mid;
                if (size % 2 == 0)
                {
                    mid = size / 2;
                }
                else
                {
                    mid = size / 2 + 1;
                }
                del_mid_node(head, mid);
            }
            else if (val == 3)
            {
                int size = getsize(head);
                del_end_node(head, size);
            }
        }

        else if (user_input == 3)
        {
            Node *display = head;
            while (display != NULL)
            {
                cout << display->data << "-->";
                display = display->next;
            }
            cout << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}
