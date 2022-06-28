#include<bits/stdc++.h>

using namespace std;
struct Array 
{
     int *A;
    int size;
    int length ;//no. of elements
   

};
void display(struct Array arr)
{
    int i;
    cout<<"elements are"<<endl;
    for( int i =0;i<arr.length ;i++ )
    cout<<arr.A[i]<<"  ";

}

int main()
{  
     Array arr;
int n,i;
cout<<"enter size of an array"<<endl;
cin>>arr.size;
arr.A= new int[arr.size];
arr.length=0;
cout<<"enter the no. of no.s"<<endl;
cin>>n;
cout<<"enter all elments"<<endl;
for(i=0;i<n;i++)
cin>>arr.A[i];
arr.length=n;
display(arr);



    return 0;

}