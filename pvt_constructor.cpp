//Write a program to demostrate accessing of the private 
//constructor using static member function 
#include <iostream>

using namespace std;

class abc
{
    int a;
    static int b;
    abc()
    {
        cout<<"Constructor"<<endl;
        cin>>a>>b;
    }
    public:void getdata()
        {
            cout<<a<<" "<<b<<endl;
        }

    static void calling_object()
    {
        abc obj;
        obj.getdata();
        obj.setvalue();

    }
    void setvalue()
    {
        b=100;
        getdata();
    }

};
int abc::b;
int main()
{
   // abc A;
   // A.getdata();
   abc::calling_object();
}
