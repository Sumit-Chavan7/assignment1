#include <iostream>
using namespace std;

int main() {
    cout << "Hello world!" <<endl;
    int i,n,res=0;
    for(i=0;i<5;i++)
        {
            cout<<"enter a number:";
            cin>>n;
            res+=n;
            
        }
    res/=5;
    cout<<"the average of entered numbers: "<<res;
    return 0;
}
