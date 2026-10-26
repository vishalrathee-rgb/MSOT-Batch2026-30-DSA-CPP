#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[] = {10,20,30,40,50};
    int * p = arr;
    cout<<p<<" "<<arr<<endl;
    cout<<&(p[2])<<" "<<p+2<<endl;


    int  arr2 [] = {}; 
    
    cout<<arr<<endl;
    cout<<&(arr[0])<<endl;
    cout<<*(arr+2)<<endl;
    cout<<arr[30000]<<endl;//--> *(arr+30)
    int a = 5;
    int * p = &a;
    p++;
    cout<<&a<<" "<<p<<endl;

    double d = 10.0;
    double * p = &d;
    p++;
    cout<<&d<<" "<<p<<endl;
    double ** p2 = &p;
    p2++;
    cout<<p2<<" "<<&p<<endl;
    cout<<(p2-&p)<<endl;
    return 0;
}