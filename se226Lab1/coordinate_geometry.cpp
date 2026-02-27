#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x1;
    int x2;
    int y1;
    int y2;

cout << "enter x1: "<<endl;
cin >> x1;
cout << "enter x2: "<<endl;
cin >> x2;
cout << "enter y1: "<<endl;
cin >> y1;
cout << "enter y2: "<<endl;
cin >> y2;

int sum = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

cout<<"Distance: " << sum;
return 0;
}