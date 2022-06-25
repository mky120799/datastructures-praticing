#include<bits/stdc++.h>
using namespace std;
class Array{
    private :
    int *A;
    int size;
    int length;
    public:
    Array(int size)
    {
        this->size=size;
        A=new int [size];

    }
    void create(){
        cout<<"enter number of elements :"<<flush;
        cin>>length;
        cout<<"enter the array elements :"<<endl;
        for (int i ;i<length ;i++)
        {
            cout<<"Array elements :"<<i<<" ="<<flush;
            cin>>A[i];
        }

        }
void display(){
    for(int i=0;i<length;i++){
        cout<<A[i];

    }
}
    
    ~Array(){
        delete[] A;
        cout<<"array destroyed"<<endl;
    }
};
int main(){
    Array arr(10);
    arr.create();
    arr.display();
    return 0;
}