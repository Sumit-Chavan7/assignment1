#include <iostream>
using namespace std;
    class Student
    {
     public:
    string name;//https://www.mycompiler.io/edit/8FVO6CBzTrs
    int res;
    Student(string n,int r){
        name=n;
        res=r;
    }
    
    void disp(Student stu){
        cout<<"\nThe name of student is: "<<stu.name;
        if(stu.res==1)
            cout<<"\nThe student is passed";
        else if(stu.res==2)
            cout<<"\nThe student is failed";
        else
            cout<<"\n Invalid marks status";
    
    }
    
    };

int main() {
    //cout << "Hello world!" << std::endl;
    Student st("suresh",44);
    cout<<st.name<<endl;
    cout<<st.res<<endl;
    /*st[0]=Student("suresh",55);
    st[1]=Student("ramesh",44);
    st[2]=Student("mohan",66);
    st[3]=Student("sahil",22);
    cout<<"The Entered data is :\n";*/
    //Student::disp(st);
    
    //cout<<"hi";
    return 0;
}
