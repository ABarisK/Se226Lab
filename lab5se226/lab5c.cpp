#include <iostream>
using namespace std;



int Gn(int n, int r){
    int sum=0;
    
    if(n == 0){
        sum++;
    }else{
        return pow(r, n) + Gn(r - 1, n);
    }
}

int main(){
    int n;
    cout << "Enter a n value: ";
    cin >> n;

    

   
}