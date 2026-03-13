#include <iostream>
using namespace std;

#define n 100

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << " No value to pop " << endl;
            return;
        }
        top--;
    }
    bool empty()
    {
        return top == -1;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << " No value to stack " << endl;
            return -1;
        }
        return arr[top];
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.Top() << endl;
    cout << st.empty() << endl;
    return 0;
}