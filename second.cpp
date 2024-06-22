#include<iostream>
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    stack<int> s;
    v.push_back(1);
    v.push_back(23);
    v.push_back(1733);
    v.push_back(-400);
    for(auto i=v.rbegin();i!=v.rend();i++)
    {
        cout<<*i<<endl;
    }

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(s.size())
    {
        cout<<"|"<<s.top()<<"|"<<endl;
        s.pop();
    }

    set<int> u;
    u.insert(-1);
    u.insert(-2);
    u.insert(-3);
    u.insert(-4);
    for(auto i=u.begin();i!=u.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<u.size();

    map<int,int> m;
    m.insert(pair<int,int> (1,24));
    m.insert(pair<int,int> (2,54));
    m.insert(pair<int,int> (53,0));
    m.insert(pair<int,int> (4,-100));
    for(auto i=m.begin();i!=m.end();i++)
    {
      cout<<i->first<<" "<<i->second<<endl;
    }
    cout<<m[1]<<endl;

    sort(v.begin(),v.end());
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<endl;
    }
}