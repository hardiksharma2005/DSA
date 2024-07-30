// insertion at head

// #include<iostream>

// using namespace std;

// class ListNode {

// public:

// 	int val;
// 	ListNode* next;

// 	ListNode(int val) {
// 		this->val = val;
// 		this->next =  NULL;
// 	}

// };

// void insertAtHead(ListNode*& head, int val) {

// 	ListNode* n = new ListNode(val);
// 	n->next = head;
// 	head = n;

// }

// void printLinkedList(ListNode* head) {

// 	while (head != NULL) {
// 		cout << head->val << " ";
// 		head = head->next;
// 	}

// 	cout << endl;

// }

// int main() {

// 	// ListNode* n = new ListNode(10);

// 	// cout << (*n).val << endl;
// 	// cout << n->val << endl;

// 	// if ((*n).next == NULL) {
// 	// 	cout << "NULL" << endl;
// 	// }

// 	// if (n->next == NULL) {
// 	// 	cout << "NULL" << endl;
// 	// }

// 	ListNode* head = NULL; // LinkedList is empty

// 	insertAtHead(head, 50);
// 	insertAtHead(head, 40);
// 	insertAtHead(head, 30);
// 	insertAtHead(head, 20);
// 	insertAtHead(head, 10);

// 	printLinkedList(head);

// 	if (head == NULL) {
// 		cout << "LinkedList is empty" << endl;
// 	}

// 	printLinkedList(head);

// 	// insertAtHead(head, 0);

// 	// printLinkedList(head);

// 	return 0;
// }

// insertion at tail
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

// ListNode *getTail(ListNode *head)
// { // headPtr is passed-by-value

//     while (head->next != NULL)
//     {
//         head = head->next;
//     }

//     return head;
// }

// // time : O(n) due to getTail()

// void insertAtTail(ListNode *&head, int val)
// { // headPtr is passed-by-reference

//     if (head == NULL)
//     {
//         insertAtHead(head, val);
//         return;
//     }

//     ListNode *n = new ListNode(val); // const
//     ListNode *tail = getTail(head);  // linear
//     tail->next = n;                  // const
// }

// int main()
// {

//     ListNode *head = NULL; // initially, linkedList is empty

//     // insertAtHead(head, 50);
//     // insertAtHead(head, 40);
//     // insertAtHead(head, 30);
//     // insertAtHead(head, 20);
//     // insertAtHead(head, 10);

//     // printLinkedList(head);

//     insertAtTail(head, 60);

//     printLinkedList(head);

//     return 0;
// }

// insertion at index
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
    { // head != NULL
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

ListNode *getNode(ListNode *head, int j)
{

    // return the address of the node present at the jth index of the given LinkedList

    int k = 1;
    while (head != NULL and k <= j)
    {
        head = head->next;
        k++;
    }

    return head;
}

// time : O(n) due to getNode()

void insertAtIndex(ListNode *&head, int i, int val)
{

    if (i == 0)
    {
        insertAtHead(head, val);
        return;
    }

    ListNode *n = new ListNode(val);       // const
    ListNode *prev = getNode(head, i - 1); // linear
    if (prev == NULL)
    {
        // i > length of linkedList i.e. invalid index
        return;
    }
    n->next = prev->next; // const
    prev->next = n;       // const
}

int main()
{
    ListNode *head = NULL; // initially, linkedList is empty

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head);

    insertAtIndex(head, 0, 25);

    printLinkedList(head);

    return 0;
}