//Write a sample program to understand tha static variable

#include <iostream>

using namespace std;

class abc {
public:int a,b;
    static int c;//declaration as static;
};


  int abc::c=10;// must and should need to do give this defination


int main()
{
    abc A,B,C;
 cout<<"size of object A="<<sizeof(A)<<endl;//size of static will not affect on the object
 //because it is located in the data segment of the memory.


 cout<<A.c<<endl;
 cout<<"Enter the value of c "<<endl;
 cin>>abc::c; //changing in value will affect on every objects and
 //can be accessable by the class name also instead of the object
 cout<<A.c<<endl;
 cout<<B.c<<endl;
 cout<<C.c<<endl;

 cout<<"adresses of all objects c variable"<<endl;
 cout<<"add for A="<<&A.c<<endl;
 cout<<"add for B="<<&B.c<<endl;
 cout<<"add for C="<<&C.c<<endl;
 //Adress is same for all the objects

}
