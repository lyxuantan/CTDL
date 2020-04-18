/*
Để sắp xếp dãy M0,M1,...Mn-1 giải thuật QuickSort dựa trên việc phân hoạch dãy ban đầu thành 3 phần
Phần tử pivot(vị trí thường là chia đôi danh sách)

Dãy con 1: Gồm các phần tử M0...Mi có giá trj không lớn hơn pivot
Dãy con 2: Gồm các phần tử Mi...Mn-1 có giá trị không nhỏ hơn pivot
với pivot là giá trị của một phần tử tùy ý trong dãy ban đầu. Sau khi thực hiện phân
hoạch, dãy ban đầu được phân chia thành 3 phần
1.Mk<pivot, với k=0..i
2.Mk=pivot,với k=i..j
3.Mk>pivot, với k=j..N-1

Trong đó dãy con thứ 2 đã có thứ tự
Nếu các dãy con 1 và 3 chỉ có 1 phần tử thì chúng cũng đã có thứ tự, khi đó
dãy
ban đầu đã được sắp.
Ngược lại, nếu các dãy con 1 và 3 có nhiều hơn 1 phần tử thì dãy ban đầu chỉ
có thứ tự khi các dãy con 1,3 được sắp
Để sắp  xếp dãy con 1 và 3 , ta lần lượt tiến hành việc phân hoạch từng dãy con theo
cùng phương pháp phân hoạch dãy ban đầu vừa trình bày.


*/


#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void NhapMang(int M[],int n);
void XuatMang(int M[],int n);
void QuickSort(int M[],int left,int right);

int main()
{
    int n;
    cout<<"nhap n:";
    cin>>n;
    int M[n];
    NhapMang(M,n);
    cout<<"Mang sau khi nhap:\n";
    XuatMang(M,n);
    cout<<"Mang sau khi sap xep:\n";
    QuickSort(M,0,n-1);
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
void QuickSort(int M[],int left,int right)
{
    if(left >= right) return;//nếu left > right thì nghỉ lúc này hết rồi
    int pivot=M[(left+right)/2];//tìm pivot
    int i=left, j=right;
    do
    {
        while (M[i]<pivot) i++;//tìm vị trí sai bên trái pivot tìm những phần tử nào nó nhìn thấy lần đầu tiên mà nó lớn
        //hơn pivot thì dừng để đẩy qua tay phải
        while (M[j]>pivot) j--;//chạy ngược danh sách bên tay phải trong khi đang đúng phải chuyển về bên tay trái nếu phần tử nào nhỏ hơn pivot thi ngừng
        //tìm vị trí sai đầu tiên của trái và phải để hoán đổi chúng

        if(i<=j)//i<j thì hoán đổi
        {
            int temp = M[i];
            M[i] = M[j];
            M[j] =temp;
            i++;
            j--;

            //Mỗi lần chỉ 1 phần tử thôi sau 1 lần phải dịch tiếp

        }
        }while (i<j);
        QuickSort(M,left,j);//kết thúc khi i=j
        QuickSort(M,i,right);

    }


