#include <iostream>
#include <vector> 
using namespace std;
 
/* Structure for a linked list node */
struct Node {
    int data;
    struct Node* next;
};
 
/*funnction to insert whole linked list into another linked list at position k*/
void insert(struct Node* head1, struct Node* head2,
            int k)
{
    int count = 1;
    struct Node* curr = head1;
    while (count < k) {
        curr = curr->next;
        count++;
    }
    struct Node* temp = curr->next;
    curr->next = head2;
    while (head2->next != NULL)
        head2 = head2->next;
        head2->next = temp;
}
 
// Function to print linked list recursively
void printList(Node* head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    printList(head->next);
}
 
/*push function (inserting the data)*/
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

/*reverse for node A*/
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    

/*reverse for node B*/
void rvereseArray2(int arr2[], int start2, int end2)
{
    while (start2 < end2)
    {
        int temp2 = arr2[start2];
        arr2[start2] = arr2[end2];
        arr2[end2] = temp2;
        start2++;
        end2--;
    }
}    

int main()
{
    struct Node* a = NULL;
    struct Node* b = NULL;
    int k;
    
    /* Input for Node A */
    int n;
    cout << "Number of nodes A:\n";
    cin >> n;

    vector<int> arr(n);
    cout << "Insert nodes A:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rvereseArray(arr.data(), 0, n-1);
    for (int i = 0; i < n; i++){
        push(&a, arr[i]);
    }

    /* Input for Node B */
    int x;
    cout << "Number of nodes B:\n";
    cin >> x;

    vector<int> arr2(x);
    cout << "Insert nodes B:\n";
    for (int i = 0; i < x; i++) {
        cin >> arr2[i];
    }

    rvereseArray(arr2.data(), 0, x-1);
    for (int i = 0; i < x; i++){
        push(&b, arr2[i]);
    }
   
    /* Input for location to be inserted */
    cout << "Location:\n";
    cin >> k;

    insert(a, b, k);
 
    cout << "Resulting linked list\n";
    printList(a);

    return 0;
}