#include<iostream>
#include<fstream>
#include<string.h>
 using namespace std;

 void oddeven(int n){
     int bitmask=1;
     if((n & bitmask)==0){
        //even
        cout<<"no. is even"<<endl;
     }
     else{

        cout<<"no. is odd"<<endl;
     }
 }

 int get_i_bit(int n, int i){
    int bitmask=1<<i;
    if((n&bitmask)==0){
        return 0;
    }
    else{
        return 1;
    }
 }

 int set_bit(int n, int i){
   int bitmask=1<<i;
    return (n|bitmask);
 }

 int clear_bit(int n, int i){
    int bitmask=~(1<<i);

    return n&bitmask;
 }

 int update_bit(int n, int i, int newbit){
//    if(newbit==0){
//     clear_bit(n,i);
//    }
//    else{
//     set_bit(n,i);
//    }
    
    n=clear_bit(n,i);
    int bitmask=newbit<<i;
    return n|bitmask;


 }

 int clear_last_bits(int n , int i){
   int bitmask= (~0)<<i;
   return n & bitmask;

 }

 int clear_range_bits(int n ,int i, int j){
    int a =(~0)<<(j+1);
    int b= (1<<i)-1;
    int bitmask=a|b;
     return n & bitmask;

 }

 int is_power_2(int n){
    if((n & (n-1))==0){
        cout<<"it is a power of two"<<endl;
    }
    else{
        cout<<" not a power of two"<<endl;
    }
    
 }

int main()
{
 oddeven(3);
 oddeven(4);
 oddeven(7);

 cout<<get_i_bit(10,2)<<endl;//1010=10
  cout<<get_i_bit(10,3)<<endl;

  cout<<set_bit(10,2)<<endl;//1010->1110


  cout<<clear_bit(10,1)<<endl; //1010->1000


  cout<<update_bit(10,2,1)<<endl;//1010->1110

  cout<<clear_last_bits(15,3)<<endl;//1111->1000

  cout<<clear_range_bits(10,2,4)<<endl;//001010->000010


  is_power_2(15);
   
 return 0;
}