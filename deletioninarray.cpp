#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int A[10] ;
    int length;
    int size;
};
void display(struct Array arr)
{
for (int i=0;i<arr.length;i++)
cout<<arr.A[i];
}
void insert(struct Array &arr,int index,int n )
{
    if(index<0||index>arr.length )
    {
        cout<<"invalid index given\n";

    }
    int i;
    for(int i=arr.length ;i>index;i--)
    
     arr.A[i]=arr.A[i-1];
    
 
    arr.A[index]=n;
    arr.length ++;
   
}




int main()
{
    struct Array arr={{4,3,6,4,6},5,10};
      


    unsigned int index=4;

    
    insert(arr,index,3-1);
    display(arr);//should be the last function

}