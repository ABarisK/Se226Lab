#include <iostream>
using namespace std;

int main(){
int x;
cout << "Enter a large int: ";
   cin >> x;

   int h = x/3600;
   int m = (x-h*3600)/60;
   int s = (x-h*3600-m*60);

   cout << x<< " second is "<< h<<" hour, "<<m<<" minute, "<<s<<" second";
   return 0;
   
}