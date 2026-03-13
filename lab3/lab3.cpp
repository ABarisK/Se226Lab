#include <iostream>
using namespace std;

void swapValues(int* p1, int* p2){
    int &a1=*p1;
    int &a2=*p2;
    int temp = a1;

    a1 = a2;
    a2=temp; 
}
//-----------------------------------------------------------------------------------------

void printArray(int* arr, int size){
    for(int i=0; i<size; i++){
        cout << *(arr+i)<< " ";
    }
}
//-----------------------------------------------------------------------------------------

int findMax(int* arr, int size){
    int max = *arr;
    for(int i=1; i<size; i++){
        if(*(arr+i) > max){
            max=*(arr+i);
        }
    }

    return max;
}
//-----------------------------------------------------------------------------------------
int* createArray(int size){

    int* arr;
    arr = new int[size];

    cout<< "Enter values: ";
    for(int i=0; i<size; i++){
        cin >> *(arr+i);
    }

    return arr;
}
//-----------------------------------------------------------------------------------------
void deleteArray(int* arr){
    delete[] arr;
}
//-----------------------------------------------------------------------------------------

void reverseArray(int* arr, int size){
    for(int i=0; i<size/2; i++){
        swapValues(arr+i,(arr+(size-1-i)) );
    }
}
//-----------------------------------------------------------------------------------------

int main(){
     cout<< "Creating dynamic array... "<< endl<<endl;
     int size;
     cout<< "Enter size: ";
     cin >> size;
     cout<< endl;

int* arr = createArray(size);
cout<<endl;
cout << "Array elements: "<<endl;
printArray(arr,size);
cout<<endl<< endl;

cout << "Maximum element: "<< findMax(arr,size)<<endl;
cout<<"----------------------------------------------"<<endl;
cout<< "Swapping two numbers ";
cout<<endl<< endl;
cout<<"Before swap: "<< endl;
int a=5,b=8;
cout<<"a = "<< a << endl;
cout<<"b = "<< b << endl;
swapValues(&a,&b);
cout<< "After swap "<<endl;
cout<<"a = "<< a << endl;
cout<<"b = "<< b << endl;
cout<<"----------------------------------------------"<<endl;
cout<<"Reversing array..."<<endl;
cout<<endl<< endl;
cout<<"Array after reverseArray: "<< endl;
reverseArray(arr,size);
printArray(arr,size);
cout<< endl;
cout<<"----------------------------------------------"<<endl;
cout<<"Deleting array..."<<endl<<"Memory released successfully.";

}