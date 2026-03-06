#include <iostream>
using namespace std;

/*int main(){
    int finals=0;
    int steps=1;
    int x;

    cout<< "Please enter a positive integer greater than 9: ";
    cin>>x;
    if(x>=9){
         while (true){
            cout<<x<<" -> ";
            if(x<10)break;
            steps++;
                int sum=0;
                while(true){
                   int h = 
                   sum= sum+(x/10);
                    
                    if(p<=x){
                        continue;
                    }else{
                        x=sum;
                        finals=x;
                        break;
                    }
                }
        }
    }else{
        cout<<"Its negatives!!";
    }
    cout<<"Final value: "<<finals<<endl;
    cout<<"Total steps: "<<steps<<endl;


    return 0;
} */
//------------------------------------------------------------------------------------------

/*int main(){
    int x;
    int fc=0;
    int bc=0;
    int fbc=0;

    while (true){
        cout<<"Please enter a number between 10 and 100: ";
        cin>>x;
        if(x<10 || x>100){
            cout<<"Invalid input.";
        }else{
            break;
        }
    }
    for(int i=1; i<=x; i++){
        if(i%7==0){
            cout<<"( "<<i<<" is skipped)"<<endl;
            continue;
        }else if(i%15==0){
            cout<<"FizzBuzz"<<endl;
            fbc++;
            continue;
        }else if(i%3==0){
            cout<<"Fizz"<<endl;
            fc++;
            continue;
        }else if(i%5==0){
            cout<<"Buzz"<<endl;
            bc++;
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }
    cout<<"--- Summary ---"<<endl;
    cout<<"Fizz count: "<< fc<< endl;
    cout<<"Buzz count: "<< bc<< endl;
    cout<<"FizzBuzz count: "<< fbc<< endl;
    return 0;
} */
//------------------------------------------------------------------------------------------

int main(){
    int x;
    cout<<"Please enter a number between 3 and 9: ";
    cin>>x;
    if(x>=9 || x<=3){
        cout<<"invalid input";
    }else{
    for (int i = 1; i <= (2 * x - 1); i++) {
        int k = x - abs(x - i);
        for (int j = 1; j <= k; j++) {
            cout << j;
        }
        cout << endl;
    }
    }

return 0;

}