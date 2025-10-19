Algorithm: Find Kth to Last Element in a Singly Linked List
Input: Head of linked list, integer K
Output: The Kth node from the end

// Steps:

Initialize a variable count = 0.

Set temp = head.

Traverse the list while temp != NULL:

Increment count by 1

Move temp = temp->next

If K > count, print "Invalid input" and return.

Set temp = head again.

Traverse (count - K) times:

temp = temp->next

Return or print temp->data as the Kth to last element.