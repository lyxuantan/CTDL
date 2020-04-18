#include <iostream>
/*tìm Nhị phân*/

using namespace std;
void NhapMang(float F[],int n);
void XuatMang(float F[],int n);
int BinarySearch(float F[],int n,float x);
void SortInCrease(float F[],int n);
int main()
{
    int n;
    cout<<"Nhap so phan tu:";
    cin>>n;
    float F[n];
    NhapMang(F,n);
    cout<<"Mang sau khi nhap:\n";
    XuatMang(F,n);
    float x;
    SortInCrease(F,n);
    cout<<"Muốn tìm gì?:";
    cin>>x;
    int kq=BinarySearch(F,n,x);
    if(kq==-1)
    {
        cout<<x<<"khong co trong mang";

    }
    else
    {
        cout<<x<<" co trong mang , o vi tri ="<<kq;
    }
    return 0;
}
void NhapMang(float F[],int n)
{

    for(int i=0;i<n;i++)
    {

        cout<<"F["<<i<<"]=";
        cin>>F[i];
    }
}
void XuatMang(float F[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<F[i]<<"\t";
    }
}
void SortInCrease(float F[],int n)
{
int tem;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
        if(F[i]>F[j])
            tem=F[i];
            F[i]=F[j];
            F[j]=tem;
    }
}
int BinarySearch(float F[],int n,float x)
{
    int left=0;
    int right=n-1;
    int mid;
    do{
        mid=(left+right)/2;
        if(F[mid]==x)
            return mid;
        else if(F[mid]<x)
            left=mid+1;
        else
            right=mid+1;


    }
    while(left<=right);
    return -1;

}
