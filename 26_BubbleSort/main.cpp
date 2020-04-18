#include <iostream>
#include <time.h>
#include <stdlib.h>


/*Note

Ý tưởng chính
Xuất phát từ cuối(đầu) dãy, đổi chỗ các cặp phần tử kế cận để
đưa phần tử nhỏ (lớn) hơn trong cặp phần tử đó về vị trí đứng đầu
(cuối) dãy hiện hành , sau đó sẽ không xét đến nó ở bước tiếp theo,
*Ở phẩn xử lý thứ i có bị tró đầu dãy là i
*Lặp lại xử lý trên cho đến khi không còn cặp phần tử nào để xét



*/
void NhapMang(int M[],int n);
void XuatMang(int M[],int n);
void BubbleSort(int M[],int n);
using namespace std;

int main()
{
    int n;
    cout<<"Nhap n:";

    cin>>n;
    int M[n];
    NhapMang(M,n);
    cout<<"Mang sau khi nhap:\n";
    XuatMang(M,n);
    BubbleSort(M,n);
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
void BubbleSort(int M[],int n)
{
    int i,j;

    for(i=0;i<n-1;i++)
    {

        for(j=n-1;j>i;j--)
        {
            if(M[j]<M[j-1]){
                int temp=M[j];
                M[j]=M[j-1];
                M[j-1]=temp;
            }
        }
    }
}
