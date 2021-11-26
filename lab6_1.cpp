#include<iostream>
using namespace std;

int main(){
    int N,i = 0,k = 0;
    cout << "Enter an integer: ";
    cin >> N;
    while(N != 0){
         if(N%2 == 0){
             i++;
         }else{
             k++;
         }
         cout << "Enter an integer: ";
         cin >> N;
    }
    cout << "#Even numbers = "<< i << "\n";
    cout << "#Odd numbers = " << k << "\n";
    return 0;
}
