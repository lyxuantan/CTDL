/*Xét dãy n phần tử :M0,M1,...M-1
Xem dãy gồm 1 phần tử là M0 dãy có thứ tự
Thêm M1 vào dãy có thứ tự M0 sao cho dãy mưới M0,M1 là dãy có thứ tự
Nếu M1<M0 ta đổi chỗ M1 với M0
*Thêm M2 vào dãy có thứ tự M0,M1 sao cho dãy mưới M0,M1,M2 là dãy có thứ tự
*Tiếp tục như thế đến n-1 bước ta sẽ có dãy có thứ tự M0,M1,...Mn-1

*/


#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


void InputArray(int M[],int n);
void OutputArray(int M[],int n);
void InsertionSort(int M[],int n);
void ChenTrucTiep(int M[],int n);

int main()
{
    int n;
    cout<<"Nhap n:";

    cin>>n;
    int M[n];
    InputArray(M,n);
    cout<<"Mang sau khi nhap:\n";
    OutputArray(M,n);
    ChenTrucTiep(M,n);
    cout<<"Mang sau khi sap xep:\n";

    OutputArray(M,n);

    return 0;
}
void InputArray(int M[],int n)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {

        M[i]=rand()%100;
    }
}
void OutputArray(int M[],int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<M[i]<<"\t";
    }
}
void InsertionSort(int M[],int n)
{
    //lưu vị trí cần chèn
   int pos=0;
   //Lưu giá trị M[i] tránh bị ghi đè khi dời chỗ các phần tử
   int x;
   //xem đoạn M[0] đã sắp
   for(int i=1;i<n;i++)
   {
       x=M[i];
       for(pos=i;(pos>0)&&M[pos-1]>x;pos--)
       {
           M[pos]=M[pos-1];
       }
       M[pos] = x;//chèn x vào đây
   }

}
void ChenTrucTiep(int M[],int n)
{
    int pos=0;
    int x;
    for(int i=1;i<n;i++)
    {
        x=M[i];
        for(pos=i;(pos>0)&&(M[pos-1]>x);pos--)
        {
            M[pos]=M[pos-1];
        }
        M[pos]=x;
    }
}
