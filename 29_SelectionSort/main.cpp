/*
Ý tưởng:Mô phỏng một trong những cách sắp xếp tự nhiện nhất trong thực
tế:
Chọn phần tử nhỏ nhất trong N phần tử ban đầu, đưa phần tử này về vị trí đúng
là đầu dãy hiện hành
*Xem dãy hiện hành chỉ còn N-1 phân tửu của dãy ban đầu, bắt đầu từ bị trí thứ 2;
lặp lại quá trình trên cho dãy hiện hành-- đến khi dãy hiện hành cỉ còn 1 phần tử

*/




#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


void InputArray(int M[],int n);
void OutputArray(int M[],int n);
void SelectionSort(int M[],int n);

int main()
{
    int n;
    cout<<"Nhap n:";

    cin>>n;
    int M[n];
    InputArray(M,n);
    cout<<"Mang sau khi nhap:\n";
    OutputArray(M,n);
    SelectionSort(M,n);
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
void SelectionSort(int M[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;//giả sử số đầu trong dãy đang xét là nhỏ nhất
        for(int j=i+1;j<n;j++)
        {
            //tìm số nhỏ nhất trong dãy đang xét
            if(M[j]<M[min])
            {
                min=j;
            }
        }
        if(min!=i)//nếu có số nào nhỏ hơn số đầu trong dãy đang xét thì thay đổi vị trí cho nhau
        {
            int temp=M[i];
            M[i]=M[min];
            M[min]=temp;
        }
    }
}
