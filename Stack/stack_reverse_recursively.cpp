#include <iostream> 
#include <stack>
using namespace std; 

void insertAtBottom(stack<int> &s, int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }

    int y = s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(y);
    return;
}

void reverseRec(stack<int> &s)
{
    if(s.empty())
    return;

    int x = s.top();
    s.pop();
    reverseRec(s);
    insertAtBottom(s,x);
}

int main()
{
    stack<int> s1;
    for(int i=1; i<=5; i++)
    {
        s1.push(i);
    }
    reverseRec(s1);
    while(!s1.empty())
    {
        cout<<s1.top()<<endl;
        s1.pop();
    }
    return 0;
}
