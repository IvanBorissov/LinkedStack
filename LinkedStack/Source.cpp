#include <iostream>
#include "LinkedStack.hpp"
using namespace std;

int main()
{
	LinkedStack<string>Stack;
	int N;
	string a;
	cin >> N;

	Stack.pop();

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		Stack.push(a);
	}

	while (!Stack.empty())
	{
		cout << Stack.top() << endl;
		Stack.pop();
	}

	Stack.top();

	return 0;
}