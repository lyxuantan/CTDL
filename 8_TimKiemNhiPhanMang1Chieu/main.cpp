#include <iostream>

using namespace std;


void NhapMang(int M[],int n);
void XuatMang(int M[],int n);
int BSearch(int M[],int n,int x);
int BSearchRecur(int M[],int x,int left,int right);
int main()
{
    int n=5;

   int M[n];
   NhapMang(M,n);
   cout<<"Mang sau khi nhap:\n";
   XuatMang(M,n);
   cout<<"\nNhap so muon tim:";
   int x;
   cin>>x;
   int kq = BSearch(M,n,x);
   if(kq==-1)
   {
       cout<<"Khong Thay "<<x;

   }
   else{

    cout<<"Thay "<<x<<" o vi tri"<<kq+1;
   }
   cout<<"Tim bang cach 2"<<endl;
   kq=BSearchRecur(M,x,0,n-1);
   if(kq==-1)
   {
       cout<<"Khong Thay "<<x;

   }
   else{
    cout<<"Thay "<<x<<" o vi tri"<<kq+1;
   }

    return 0;
}
void NhapMang(int M[],int n)

{
    for(int i=0;i<n;i++)
    {
        cout<<"M["<<i<<"]=";
        cin>>M[i];
    }
}
void XuatMang(int M[],int n)

{
    for(int i=0;i<n;i++)
    {
        cout<<M[i]<<"\t";
    }

}
int BSearch(int M[],int n,int x)
{
    int left=0;
    int right=n-1;
    int mid;
    do
    {
        mid=(left+right)/2;
        if(M[mid]==x)
            return mid;
        else if(M[mid]>x)
            right=mid-1;
        else
            left=mid+1;

    }
    while(left<=right);
    return -1;

}
int BSearchRecur(int M[],int x,int left,int right)
{
    if(left>right)
        return -1;
    int mid=(left+right)/2;
    if(M[mid]==x)
        return mid;
    if(M[mid]>x)
        return BSearchRecur(M,x,left,mid-1);
    else
        return BSearchRecur(M,x,mid+1,right);

}
