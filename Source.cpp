#include<iostream>
#define MAX 10
using namespace std;

class queue
{
	int array[MAX];
	int front, rear;
public:
	queue() :front(-1), rear(-1) {}
	void pushFront();
	void pushRear();
	int  popFront();
	int  popRear();
	void dislay()const;

};
void queue::dislay()const
{

	if (front < 0)
		cout << "Queue is Empty \n\n";
	else
	{
		cout << "Queue Elements: ";
		for (int i = front; i <= rear; i++)
			cout << array[i] << " ";
		cout << endl;
	}
}
void queue::pushFront()
{
	if (front <= 0)
		cout << "Cannot Add Item At Front End \n\n";
	else
	{
		int data;
		cout << "Enter Data: ";
		cin >> data;

		array[--front] = data;

	}
}
void queue::pushRear()
{
	if (rear >= MAX)
		cout << "Queue is OverFlow \n\n";
	else
	{
		int data;
		cout << "Enter Data: ";
		cin >> data;
		if (front == -1)
			front = 0;

		array[++rear] = data;

	}
}

int queue::popFront()
{
	if (front < 0)
		cout << "Queue UnderFlow \n\n";
	else
	{
		int data;
		data = array[front];
		if (front == rear)
			front = rear = -1;
		else
			front++;
		
		return data;
	}
}
int queue::popRear()
{
	if (rear < 0)
		cout << "Queue UnderFlow \n\n";
	else
	{
		int data;
		data = array[rear];

		if (rear == front)
			front = rear = -1;
		else
			rear--;

		return data;

	}
}
int main()
{
	int ch;
	queue obj;

	while (true)
	{
		system("CLS");
		cout << "----------(MAIN MENU)----------\n";
		cout << "1) Push From Front \n";
		cout << "2) Push From Rear \n";
		cout << "3) Pop From Front \n";
		cout << "4) Pop From Rear \n";
		cout << "5) Display \n";
		cout << "6) Exit \n\n";
		cout << "Enetr Choice: ";
		cin >> ch;

		switch (ch)
		{
		case 1:
			obj.pushFront();
			system("Pause");
			break;
		case 2:
			obj.pushRear();
			system("Pause");
			break;
		case 3:
			cout << "Pop Element: " << obj.popFront() << endl;
			system("Pause");
			break;
		case 4:
			cout << "Pop Element: " << obj.popRear() << endl;
			system("Pause");
			break;
		case 5:
			obj.dislay();
			system("Pause");
			break;
		case 6:
			exit(-1);


		}
	}

}

















