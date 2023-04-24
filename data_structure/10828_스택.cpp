#include <iostream>

using namespace std;

class Stack
{
public:
	int index = -1;
	int arr[10000];

	int size()
	{
		return index + 1;
	}

	int empty()
	{
		if (index == -1)
			return 1;
		else
			return 0;
	}

	void push(int x)
	{
		index++;
		arr[index] = x;
	}
	
	int pop()
	{
		if(empty() == 0)
		{
			int temp = arr[index];
			arr[index] = NULL;
			index--;
			return temp;
		}
		else if(empty() == 1)
			return -1;
	}
	int top()
	{
		if (empty() == 0)
			return arr[index];
		else if (empty() == 1)
			return -1;
	}
};

int main()
{
	Stack stack;

	int N;
	int num;
	string Input;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> Input;

		if (Input == "push")
		{
			cin >> num;
			stack.push(num);
		}
		else if (Input == "pop")
			cout << stack.pop() << endl;
		else if (Input == "size")
			cout << stack.size() << endl;
		else if (Input == "empty")
			cout << stack.empty() << endl;
		else if (Input == "top")
			cout << stack.top() << endl;
	}

	return 0;
}