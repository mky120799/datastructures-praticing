#include<bits/stdc++.h>

using namespace std;
struct Array 
{
     int A[10];
    int size;
    int length ;//no. of elements
   

};
//function to insert 
/*void insert(Array *arr,int x,int index)
{int i;

    if(index>0&&index<arr->length)
    {     i=arr->length-1;
        for(;index<i;i--)
        arr->A[i+1]=arr->A[i];


    }
    arr->A[index]=x;
    arr->length ++;
}*/


/*
int demove(Array *arr,int index )
{ int x;
     if(index>0&&index<arr->length)
  {  
    x=arr->A[index-1];
     for(int i=index-1;arr->length-1>i;i++)
   arr->A[i]=arr->A[i+1];

  }
 arr->length --;
 return x;

}*/
int Bsearch(Array arr,int key)
{
int t=sizeof(arr.A)/sizeof(int );
cout<<"elements are"<<t<<" that is "<<0<<" to "<<t<<endl;
int l=0;
int h=9;

while(l<=h)
{
    int m=(l+h)/2;
    if(key==arr.A[m])
    return m;
    if(key>arr.A[m])
    
        l=m+1;
        else
        h=m-1;

}

}
void swape(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;


}

int Lsearch(Array arr,int key)
{
    for(int i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
        {
            //transposition
            swape(arr.A[i],arr.A[i-1]);
            return i-1;
        }
    }
}
void display(struct Array arr)
{
    int i;
    cout<<"elements are"<<endl;
    for( int i =0;i<arr.length ;i++ )
    cout<<arr.A[i]<<"  ";

}
int get(Array arr,int index)
{int i=0;
    if(index>0&&index<arr.length)
    {
       return arr.A[index-1];
    }
}

int main()//yha hm lenghth ko lenght -1
//
{  
     Array arr{{2,5,6,8,9,10,11},10,7};
/*int n,i;
cout<<"enter size of an array"<<endl;
cin>>arr.size;
arr.A= new int[arr.size];
arr.length=0;
cout<<"enter the length of no.s"<<endl;
cin>>n;
cout<<"enter all elments"<<endl;
for(i=0;i<n;i++)
cin>>arr.A[i];
arr.length=n;
*/
//int index;
///cout<<"enter the position at which you u want to delete the element"<<endl;
//cin>>index;
//int ele;
//ele=demove(&arr,3);
//cout<<"hence deleted element is "<<ele;
//cout<<endl
//<<"at the index "<<index;
//insert(&arr,17,3);
//cout<<"hence element is found at   position"<< Bsearch(arr,6);
//display(arr);
cout<<"hence the element is "<<get(arr,3);
return 0;
}