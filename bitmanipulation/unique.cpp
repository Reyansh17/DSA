#include<iostream>
#include<fstream>
#include<string.h>
 using namespace std;
 int unique(int arr[],int n){
  int sum=0;

  for(int i=0; i<n; i++){
    sum= sum^arr[i];
  }
  return sum;

 }
int main()
{
     int arr[]={2,2,3,3,4};
     cout<<unique(arr,5)<<endl;
 return 0;
}