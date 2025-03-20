#include <iostream>
#include <vector> 
using namespace std;

/* Structure for a linked list node */
struct Node {
    int data;
    struct Node* next;
};

/* Function to insert whole linked list into another linked list at position k */
void insert(struct Node* head1, struct Node* head2, int k) {
    if (head1 == NULL || head2 == NULL || k < 1) {
        cout << "Invalid position or empty list.\n";
        return;
    }
    
    int count = 1;
    struct Node* curr = head1;
    while (count < k && curr->next != NULL) {
        curr = curr->next;
        count++;
    }

    struct Node* temp = curr->next;
    curr->next = head2;

    while (head2->next != NULL) {
        head2 = head2->next;
    }
    head2->next = temp;
}

// Function to print linked list recursively
void printList(Node* head) {
    if (head == NULL) return;
    cout << head->data << " ";
    printList(head->next);
}

/* Push function (inserting the node) */
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

/* Reverse array */
void reverseArray(vector<int>& arr) {
    int start = 0, end = arr.size() - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    /* Construct linked list A and B */
    struct Node* a = NULL;
    struct Node* b = NULL;
    int k;
    
    /* Input for Node A */
    int n;
    cout << "Number of nodes A: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Insert nodes A: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr);
    for (int i = 0; i < n; i++) {
        push(&a, arr[i]);
    }

    /* Input for Node B */
    int x;
    cout << "Number of nodes B: ";
    cin >> x;

    vector<int> arr2(x);
    cout << "Insert nodes B: ";
    for (int i = 0; i < x; i++) {
        cin >> arr2[i];
    }

    reverseArray(arr2);
    for (int i = 0; i < x; i++) {
        push(&b, arr2[i]);
    }

    /* Input for location to be inserted */
    cout << "Location: ";
    cin >> k;

    cout << "Linked List A: ";
    printList(a);
    cout << "\nLinked List B: ";
    printList(b);

    insert(a, b, k);

    cout << "\nResulting linked list: ";
    printList(a);
    cout << "\n";

    return 0;
}