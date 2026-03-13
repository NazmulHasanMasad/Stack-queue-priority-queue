#include <iostream>
#include <stack>

using namespace std;

void inserAttheBottom(stack<int> st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }
    int top = st.top();
    st.pop();

    inserAttheBottom(st, element);

    st.push(top);
}

void reverseStack(stack<int> st)
{
    if (st.empty())
    {
        return;
    }
    int element = st.top();
    st.pop();

    reverseStack(st);

    inserAttheBottom(st, element);
}
void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseStack(st);
    printStack(st);

    return 0;
}