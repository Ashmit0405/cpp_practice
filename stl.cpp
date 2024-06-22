#include<bits/stdc++.h>
using namespace std;
int main()
{
    // unordered_map<int,int> a;
    // map<vector<int>,int> mpp;
    // vector<int> v1={1,2,3,4};
    // mpp[v1]=3;
    // cout<<mpp[v1]<<endl;
    vector<pair<int,int>> v;
    v.push_back(make_pair(1,2));   
    v.push_back(make_pair(1,2));   
        cout<<v[0].first<<endl;
    v.push_back(make_pair(1,2));   
    v.push_back(make_pair(1,2));   
    v.push_back(make_pair(1,2));   
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    map<int,map<int,int>> mpp;
    map<int,int> mp;
    mp[1]=2;
    mp.insert(make_pair(3,2));
    mpp.insert(make_pair(4,mp));
    cout<<mpp[4][3]<<endl;
}