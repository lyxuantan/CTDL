#include <iostream>

/*
Viết Chương trình cho phép
1,Nhập 1 mảng float có N phần từ
2.Xuất mảng float có N phần tử
3.Gọi x là phần tử cần tìm, đếm xem x xuất hiện bao nhiêu lần trong màng
4.Tim số chẵn lớn nhất trong mảng
5.Tìm số lẻ nhỏ nhất trong mảng


*/



using namespace std;
void NhapMang(float F[],int n);
void XuatMang(float F[],int n);
int Dem(float F[],int n, float x);
float MaxChan(float F[],int n);
float MaxLe(float F[],int n);
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
    cout<<"Nhap x:";
    int d=Dem(F,n,x);
    cout<<x<< "Xuat hien"<<d<<" lan\n";
    float maxchan=MaxChan(F,n);
    if(maxchan=-999999)
        cout<<"Mang khong co so chan";
    else
        cout<<"Max chan="<<maxchan;
    float maxle=MaxLe(F,n);
    if(maxle==-999999)
        cout<<"\nKhong co so le";
    else
        cout<<"\n Max Le="<<maxle<<endl;


    return 0;
}
void NhapMang(float F[],int n)
{

    for(int i=0;i<n;i++)
    {

        cout<<"Nhap gia tri phan tu thu"<<i<<":";
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
int Dem(float F[],int n,float x)
{

    int d=0;
    for(int i=0;i<n;i++)
    {

        if(F[i]==x)
            d++;
    }
}
float MaxChan(float F[],int n)
{
    int max=-99999;
    for(int i=0;i<n;i++)
    {
        int f2=(int)F[i];
        if(f2==F[i])//nếu 10.0 ép về vẫn bằng 10 thì mới so sánh
        if(F[i]>max &&f2%2==0)
        {
            max=F[i];
        }
    }
    return max;
}
float MaxLe(float F[],int n)
{
    int max=-99999;
    for(int i=0;i<n;i++)
    {
        int f2=(int)F[i];
        if(f2==F[i])//nếu 10.0 ép về vẫn bằng 10 thì mới so sánh
        if(F[i]>max &&f2%2!=0)
        {
            max=F[i];
        }
    }
    return max;

}
