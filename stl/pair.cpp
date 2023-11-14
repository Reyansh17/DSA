#include<bits/stdc++.h>
 using namespace std;
int main()
{
    //pairs

pair <int,int> p={1,2};
//cout<<p.first;
pair <int,pair<int,int>> q={1,{2,3}};
cout<<q.second.second;
 return 0;
}