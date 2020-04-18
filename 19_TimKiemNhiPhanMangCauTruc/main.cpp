/*
Giải thuật tương tự như trên mảng số nguyên .Tìm kiếm sản phẩm có đơn
giá X, có cấu trúc sau:
struct SanPham
{
int ma;
char ten[150];
float gia;


}

*/



#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

struct SanPham
{

    int ma;
    char ten[150];
    float gia;
};
void NhapDanhSach(SanPham dsSp[],int n);
void XuatDanhSach(SanPham dsSp[],int n);
SanPham * TimSanPham(SanPham dsSp[],int n, float giatim);
int main()
{
    int n;
    cout<<"Nhap So San Pham:";
    cin>>n;
    SanPham dsSp[n];
    NhapDanhSach(dsSp,n);
    cout<<"San pham sau khi nhap:\n";
    XuatDanhSach(dsSp,n);
    float giatim;
    cout<<"Nhap gia muon tim:";
    cin>>giatim;
    SanPham *sp=TimSanPham(dsSp,n,giatim);
    if(sp==NULL)
    {
        cout<<"Khong thay san pham co gia="<<giatim;

    }
    else{
          cout<<sp->ma<<"\t"<<sp->ten<<"\t"<<sp->gia<<endl;

    }
    return 0;
}
void NhapDanhSach(SanPham dsSp[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap San Pham Thu"<<i<<endl;
        cout<<"Ma:";
        cin>>dsSp[i].ma;
        cin.ignore();
        cout<<"Ten:";
        gets(dsSp[i].ten);
        cout<<"Gia:";
        cin>>dsSp[i].gia;

    }

}

void XuatDanhSach(SanPham dsSp[],int n)
{
    for(int i=0;i<n;i++)
    {

        SanPham sp=dsSp[i];
        cout<<sp.ma<<"\t"<<sp.ten<<"\t"<<sp.gia<<endl;
    }
}
SanPham * TimSanPham(SanPham dsSp[],int n, float giatim)
{
    int left=0;
    int right=n-1;
    int mid=0;
    do
    {

        mid=(left+right)/2;
        SanPham sp=dsSp[mid];
        if(sp.gia==giatim)
            return &sp;//tra ve gia tri cua con tro
        else if(sp.gia>giatim)
            right=mid-1;
        else
            left=mid+1;

    }while(left<=right);
    return NULL;

}
