#include<bits/stdc++.h>
 using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // cout<<v[1];

    //    vector<int>v1(5,20);
    //    for(int i=0;i<5;i++){
    //     cout<<v1[i]<<endl;
    //    }

       //iterators
// vector<int>::iterator it=v.begin();
// cout<<*it;
// it++;
// cout<<*it;
       //how to print a vector

      
  

//   for (auto i:v){
//     cout<<i<<" ";
//   }
//   v.erase(v.begin());
//   //
//    for(auto i=v.begin();i!=v.end();i++){
//         cout<<*i<<" ";
//        }

v.erase(v.begin()+1,v.begin()+3);//erase[start,end)//1 4
//   for(auto i=v.begin();i!=v.end();i++){
//         cout<<*i<<" ";
//        }
//insert
v.insert(v.begin()+1,2,20);//1 20 20 4 
//  for(auto i=v.begin();i!=v.end();i++){
//         cout<<*i<<" ";
//        }
 
cout<<v.size();

v.pop_back();

for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
       }
 
 vector<int>v1={1,2,3,4};
  vector<int>v2={5,6,7,8};



  v1.swap(v2);


  for(auto i=v1.begin();i!=v1.end();i++){
        cout<<*i<<" ";
       }

       // v1.clear();

  for(auto i=v1.begin();i!=v1.end();i++){
        cout<<*i<<" ";
       }
       

   cout<<v1.empty();





}