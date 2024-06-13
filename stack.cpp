#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, t ,k;

    cout << "total numbers in stack are : ";
    cin >> x;
    stack<int> st;

    cout << "numbers in stack from 0 to " << x << "\n";

    for (int i = 0; i <= x; i++)
    {
        st.push(i);
        cout << st.top() << " ";
    }

    cout << "\ntranfering elements from stack to queue"<<endl;

    queue<int> que;

    while (!st.empty())
    {
        t = st.top();

        que.push(t);

        st.pop();

        if (st.size() == 0)
        {
            break;
        }
        
    }
    // cout<<"elements in que";
    // while(!que.empty())
    // {
    //     cout<<que.front()<<" ";
    //     que.pop();
    // }

    

    k = que.front();

    while (!que.empty())
    {
        k = que.front();

        st.push(k);

        que.pop();
        
        if(que.size()==0)
        {
            break;
        }
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }


    return 0;
}
