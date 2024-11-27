#include<bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> p_queue; //for max heap 
    priority_queue<int, vector<int>, greater<int>> p_queue;//for min heap
    while(true)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            int x;
            cin>>x;
            p_queue.push(x);// O(logN)
        }
        else if(c==1)
        {
            p_queue.pop(); //O(logn)
        }
        else if (c==2)
        {
            cout<<p_queue.top()<<endl; //O(1)
        }
        else{
            break;
        }
    }
    return 0;
}