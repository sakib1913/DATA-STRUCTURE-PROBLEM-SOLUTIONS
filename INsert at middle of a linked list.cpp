// C++ implementation of the approach
#include <iostream>
using namespace std;

// Node structure
struct Node {

	int value;
	struct Node* next;
};

// Class to represent a node
// of the linked list
class LinkedList {

private:
	struct Node *head, *mid;
	int count;

public:
	LinkedList();
	void insertAtMiddle(int);
	void show();
};

LinkedList::LinkedList()
{
	head = NULL;
	mid = NULL;
	count = 0;
}

// Function to insert a node in
// the middle of the linked list
void LinkedList::insertAtMiddle(int n)
{

	struct Node* temp = new struct Node();
	struct Node* temp1;

	temp->next = NULL;
	temp->value = n;

	// If the number of elements
	// already present are less than 2
	if (count < 2) {
		if (head == NULL) {
			head = temp;
		}
		else {
			temp1 = head;
			temp1->next = temp;
		}
		count++;

		// mid points to first element
		mid = head;
	}

	// If the number of elements already present
	// are greater than 2
	else {

		temp->next = mid->next;
		mid->next = temp;
		count++;

		// If number of elements after insertion
		// are odd
		if (count % 2 != 0) {

			// mid points to the newly
			// inserted node
			mid = mid->next;
		}
	}
}

// Function to print the nodes
// of the linked list
void LinkedList::show()
{

	struct Node* temp;

	temp = head;

	// Initializing temp to head
	// Iterating and printing till
	// The end of linked list
	// That is, till temp is null
	while (temp != NULL) {

		cout << temp->value << " -> ";
		temp = temp->next;
	}
	cout << "NULL";
	cout << endl;
}

// Driver code
int main()
{
	// Elements to be inserted one after another
	int arr[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	LinkedList L1;

	// Insert the elements
	for (int i = 0; i < n; i++)
		L1.insertAtMiddle(arr[i]);

	// Print the nodes of the linked list
	L1.show();

	return 0;
}
