#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int x,k,l;
    cin>>x;
    queue<int>que;
    stack<int>st;
    for(int i=0;i<=x;i++)
    {
        que.push(i);
        cout<<que.back()<<" ";
    }
    cout<<endl;
    while(!que.empty())
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
        l = st.top();
        que.push(l);
        st.pop();
        if(st.size()==0)
        {
            break;
        }
    }

    while(!que.empty())
    {
        cout<<que.front()<<" ";
        que.pop();

    }
}
