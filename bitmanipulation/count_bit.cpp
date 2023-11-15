#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int count_1(int n){
    int count = 0;
    while(n > 0){
        if((n & 1) !=0){
            count++;
        }
        n >>= 1; // Update n by shifting bits to the right
    }
    return count;
}

int main()
{
    cout << count_1(15) << endl;
    return 0;
}
