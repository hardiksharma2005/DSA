// simple reverse

// #include <iostream>

// using namespace std;

// class ListNode
// {

// public:
//     int val;
//     ListNode *next;

//     ListNode(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insertAtHead(ListNode *&head, int val)
// {

//     ListNode *n = new ListNode(val);
//     n->next = head;
//     head = n;
// }

// void printLinkedList(ListNode *head)
// {

//     while (head != NULL)
//     {
//         cout << head->val << " ";
//         head = head->next;
//     }

//     cout << endl;
// }

// // time : n.const ~ O(n)
// // space: O(1)

// ListNode *reverseIterative(ListNode *head)
// {

//     ListNode *prev = NULL;
//     ListNode *cur = head;

//     while (cur != NULL)
//     {
//         ListNode *temp = cur->next;
//         cur->next = prev;
//         prev = cur;
//         cur = temp;
//     }

//     return prev;
// }

// // t(n) = t(n-1) + c; t(1) = c; t(0) = c
// // time : O(n)
// // space: O(n)

// ListNode *reverseRecursive(ListNode *head)
// {

//     // base case

//     // if(head == NULL) {
//     // 	// LinkedList is empty
//     // 	return head;
//     // }

//     // if(head->next == NULL) {
//     // 	// LinkedList has one node
//     // 	return head;
//     // }

//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }

//     // recursive case

//     // 1. ask your friend to reverse the sublist that starts from the node which comes after the head node

//     ListNode *headFromMyFriend = reverseRecursive(head->next);
//     head->next->next = head;
//     head->next = NULL;

//     return headFromMyFriend;
// }

// int main()
// {

//     ListNode *head = NULL; // initially, linkedList is initially empty

//     insertAtHead(head, 50);
//     insertAtHead(head, 40);
//     insertAtHead(head, 30);
//     insertAtHead(head, 20);
//     insertAtHead(head, 10);

//     printLinkedList(head);

//     head = reverseIterative(head);

//     printLinkedList(head);

//     head = reverseRecursive(head);

//     printLinkedList(head);

//     return 0;
// }

// k reverse

#include <iostream>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtHead(ListNode *&head, int val)
{

    ListNode *n = new ListNode(val);
    n->next = head;
    head = n;
}

void printLinkedList(ListNode *head)
{

    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

// t(n) = t(n-k) + k
// time : O(n)
// space : O(n/k) due to fn callstack

ListNode *f(ListNode *head, int k)
{

    // base case

    if (head == NULL)
    {
        return head;
    }

    // recursive case

    // 1. reverse the 1st k nodes of the given linkedList

    ListNode *cur = head;
    ListNode *prev = NULL;
    int i = 1;

    while (i <= k and cur != NULL)
    {
        ListNode *temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
        i++;
    }

    ListNode *headFromMyFriend = f(cur, k);
    head->next = headFromMyFriend;
    return prev;
}

int main()
{

    ListNode *head = NULL;

    insertAtHead(head, 80);
    insertAtHead(head, 70);
    insertAtHead(head, 60);
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head);

    int k = 3;

    head = f(head, k);

    printLinkedList(head);

    return 0;
}