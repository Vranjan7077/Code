/*
Bubble Sort (Iterative) LinkedList
Sort a given linked list using Bubble Sort (iteratively). While sorting, you need to swap the entire nodes, not just the data.
You don't need to print the elements, just sort the elements and return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 : 1 4 5 2 -1
Sample Output 1 : 1 2 4 5
*/
void my_swap (node *node_1, node *node_2)
{
	int temp = node_1->data;
	node_1->data = node_2 -> data;
	node_2 -> data = temp;
}
node* bubble_sort_LinkedList_itr(node* head)
{
    int swapped;
 
	node *lPtr; 
    node *rPrt = NULL;
	do
	{	
		swapped = 0;
		lPtr = head;
		while(lPtr->next != rPrt)
		{
			if (lPtr->data > lPtr->next->data) 
			{
				my_swap(lPtr, lPtr->next); 
                swapped = 1; 
			}
			lPtr = lPtr->next;
		}
		//as the largest element is at the end of the list, assign that to rPtr as there is no need to
		//check already sorted list
		rPrt = lPtr;
 
	}
	while(swapped);
    return head;
}

