#include<bits/stdc++.h>
 using namespace std;
void print1(int n)
{
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<"*";
     }
        cout<<endl;
}
}
void print2(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
        cout<<"* ";
     }
        cout<<endl;
}
}
void print3(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<j;
     }
        cout<<endl;
}
}
void print4(int n){
   for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<i<<" ";
     }
        cout<<endl;
}   
}
void print5(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
        cout<<"* ";
     }
        cout<<endl;
}  

}
void print6(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
        cout<<j;
     }
        cout<<endl;
}  
}
void print7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
      for(int l=0;l<i+1;l++){
        cout<<"* ";
      }

          for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
      cout<<endl;
    }
}
void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
      for(int l=0;l<2*n-(2*i+1);l++){
        cout<<"*";
      }

          for(int k=0;k<i;k++){
            cout<<" ";
        }
      cout<<endl;
    }
}
void print9(int n){
    for(int i;i<n;i++){
        int stars=i;
        for(int j=0;j<=stars;j++){
          cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print7(n);
   

}