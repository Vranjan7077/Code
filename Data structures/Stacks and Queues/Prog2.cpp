/*
Dequeue
You need to implement a class for Dequeue i.e. for double ended queue. In this queue, elements can be inserted and deleted from both the ends.
You don't need to double the capacity.
You need to implement the following functions -
1. constructor
You need to create the appropriate constructor. Size for the queue passed is 10.
2. insertFront -
This function takes an element as input and insert the element at the front of queue. Insert the element only if queue is not full. And if queue is full, print -1 and return.
3. insertRear -
This function takes an element as input and insert the element at the end of queue. Insert the element only if queue is not full. And if queue is full, print -1 and return.
4. deleteFront -
This function removes an element from the front of queue. Print -1 if queue is empty.
5. deleteRear -
This function removes an element from the end of queue. Print -1 if queue is empty.
6. getFront -
Returns the element which is at front of the queue. Return -1 if queue is empty.
7. getRear -
Returns the element which is at end of the queue. Return -1 if queue is empty.

*/
 
 //Following is the main function we are using internally.
 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertfront(input);
 break;
 case 2:
 cin >> input;
 dq.insertrear(input);
 break;
 case 3:
 dq.deletefront();
 break;
 case 4:
 dq.deleterear();
 break;
 case 5:
 cout << dq.getFront() << "\n";
 break;
 case 6:
 cout << dq.getRear() << "\n";
 break;
 default:
 return 0;
 }
 }
 
 return 0;
 }

class Deque 
{
    private:
        int n;
        int * ar = (int*) malloc( n * sizeof(int));
        int left=0;
        int right=0;
    public:
        Deque(int x)
        {
            n = x;
        }
        void insertRear(int a)
        {
            if(right==n)
	        {	
                cout<<-1<<"\n";
            }
	        else
            {
                ar[right] = a;
                right++;
            }
        }
        void insertFront(int a)
        {
            if((left == 0 && right == n))
	        {
                cout<<-1<<"\n";
            }
	        else
            {
                for(int i=right;i>left;i--)
                {
                    ar[i]  = ar[i-1];
                }
	            ar[left] = a;
                right++;
            }
        }
        void deleteFront()
        {
            if (left == right)
	        {
                cout<<-1<<"\n";
			}
	        else
            {
                for(int i=left;i<right;i++)
                {
                    ar[i] = ar[i+1];
                }
                right--;
            }
        }
        void deleteRear()
        {
            if (left == right)
	        {
                cout<<-1<<"\n";
		     }
	        else right=right-1;
        }
        int getFront()
        {
            if(left==right)
                return -1;
            else
                return ar[left];
        }
        int getRear()
        {
            if(left==right)
                return -1;
            else
                return ar[right-1];
        }
};
