/*
Để sắp xếp một dãy số, ta có thể xét các nghịch thế có trong dãy và làm
triệt tiêu dần chúng đi
Ý tưởng chính
-Xuất phát từ đầu dãy, tìm tất cả nghịch thế chưa phần tử này , triệt tiêu
chúng bằng cách đổi chỗ phần tử này với phần tử tương ứng trong cặp nghịch thế
-Lặp lại xử lý trên với các phần tử tiếp theo trong dãy




*/
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void NhapMang(int M[],int n);
void XuatMang(int M[],int n);
void InterchangeSort(int M[],int n);









using namespace std;

int main()
{
    int n;
    cout<<"nhap n:";
    cin>>n;
    int M[n];
    NhapMang(M,n);
    cout<<"Mang sau khi nhap:\n";
    XuatMang(M,n);
    InterchangeSort(M,n);
    cout<<"Mang sau khi sap xep:\n";
    XuatMang(M,n);
    return 0;
}
void NhapMang(int M[],int n)
{

    srand(time(NULL));
    for(int i=0;i<n;i++)
    {

        M[i]=rand()%100;
    }

}
void XuatMang(int M[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<M[i]<<"\t";
    }

}
void InterchangeSort(int M[],int n)
{

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(M[i]>M[j])
            {
                int temp=M[i];
                M[i]=M[j];
                M[j]=temp;
            }
        }
    }
}
