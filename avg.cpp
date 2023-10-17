#include <iostream>
using namespace std;

int main() {
    //std::cout << "Hello world!" << std::endl;
    int arr[5],res=0;
    cout<<"enter 5 numbers: ";
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];
    cin>>arr[4];
    res=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    res/=5;
    cout<<"\nthe average of entered numbers is: "<<res<<endl;
    
    return 0;
}
