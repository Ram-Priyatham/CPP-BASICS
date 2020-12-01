/*Define class stack, queue, linked-list, array, set using some data-type (int) with data
members kept as private and functions kept in both protected and public sections.*/
#include<iostream>
#include <cstdlib>
#include<set>
#define size 20
#define sizeq 20
int top=-1;
int front =0;
int rear=0;
class node
{
public:
	int data;
	node *next;
}*head=NULL,temp,ptr;
class stack
{
	int data;
	//int top=-1;
	
	int stacks[size];
	public:
		void push(int data)
		{
			if(top>=size)
			{
				cout<<"Stack is full "<<endl;
			}
			else
			{
				top=top+1;
				stacks[top]=data;
			}
		}
		void pop()
		{
			int temp;
			if(top<=0)
			{
				cout<<"Stack is empty "<<endl;
			}
			else
			{
				temp=stacks[top];
				top=top-1;
				cout<<"Data popped is "<<temp<<endl;
			}
		}
		void stack_print()
		{
			int i=top;
			while(i>=0)
			{
				cout<<stacks[i]<<endl;
				i--;
			}
		}
};
class queue
{
	int queues[sizeq];
	int data;
public:
	void push(int data)
	{
		queues[rear]=data;
		rear++;	
	}
	void pop()
	{
		int temp;
		temp=queues[front];
		front++;
		cout<<"Element popped is "<<temp<<endl;
	}
	void queue_print()
	{
		int i=front;
		while(i<=rear)
		{
			cout<<queues[i]<<endl;
			i++;
		}
	}
};
class linked_list
{
public:	
	void insert(int data)
	{
		//temp=(struct node *)new(sizeof(struct node));
		node* temp= new node();
		node* head=new node();
		temp->data=data;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
			temp->next=head;
			head=temp;
		}
	}
	void delet()
	{
		int t;
		node* ptr = new node();
		*ptr=*head;
		t=ptr->data;
		*head=*ptr->next;
		//ptr.next=NULL;
		free(ptr);
		cout<<"Element deleted is "<<t<<endl;
	}
	void linked_print()
	{
		ptr=*head;
		while(head!=NULL)
		{
			cout<<head->data<<endl;
			head=head->next;
		}
	}
};
class arrays
{
	int a[10],n;
public:
	arrays()
	{
	}
	void insert(int n)
	{
		int i=0;
		for(i=0;i<n;i++)
		{
			cout<<"Enter data "<<endl;
			cin>>a[i];
		}
	}
	void arrays_print()
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<endl;
		}
	}
};
int main()
{
	cout<<"Stack Operations "<<endl;
	stack s;
	s.push(20);
	s.push(40);
	s.push(50);
	s.stack_print();
	s.pop();
	s.pop();
	s.stack_print();
	cout<<"Queue operations "<<endl;
	queue q;
	q.push(10);
	q.push(30);
	q.push(60);
	q.queue_print();
	q.pop();
	q.pop();
	q.queue_print();
	/*cout<<"Linked list operations "<<endl;
	linked_list l;
	l.insert(7);
	l.insert(8);
	l.insert(9);
	l.linked_print();
	l.delet();
	l.delet();*/
	cout<<"Array operations are "<<endl;
	arrays a1;
	a1.insert(6);
	a1.arrays_print();
	cout<<"Set operations are "<<endl;
	set<int> s1;
	s1.insert(1);
	s1.insert(2);
	s1.insert(3);
	cout<<"Set values are "<<endl;
	set<int>::iterator it1;
	for(it1=s1.begin();it1!=s1.end();it1++)
	{
		cout<<*it1<<"  ";
	}
}

