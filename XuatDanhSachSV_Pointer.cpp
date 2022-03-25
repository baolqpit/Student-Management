#include <iostream>
#include <cstring>
using namespace std;

 struct SinhVien
{
    char MSSV[9];
    char HoTen[51];
    char Date[11];
    char GT;
    float Toan;
    float Ly;
    float Hoa;
    float DTB;
};

void Nhap1SV(SinhVien *x)
{
    cin.getline(x->MSSV,9);
    cin.getline(x->HoTen,51);
    cin.getline(x->Date,11);
    cin >> x->GT;
    float t; // t la bien temp
    cin >> t;
    x->Toan = t;
    cin >> t;
    x->Ly = t;
    cin >> t;
    x->Hoa = t;
    x->DTB = (x->Toan + x->Ly + x->Hoa)/3;
}
void NhapDS(SinhVien *&a, int &n)
{
    cin >> n;
    a = new SinhVien[n];
    for (int i = 0 ; i < n ; i++)
    {
        cin.ignore();
        Nhap1SV(&a[i]);
    }

}

void Xuat1SV(SinhVien *x)
{
    cout << x->MSSV << "\t" << x->HoTen << "\t" << x->Date << "\t" << x->GT << "\t" << x->Toan << "\t" << x->Ly << "\t" << x->Hoa << "\t";
    cout.precision(3);
    cout << x->DTB << endl;
}

void XuatDS(SinhVien *a, int n)
{
    for (int i = 0 ; i < n ; i++)
        Xuat1SV(&a[i]);
}

int main()
{
    SinhVien *a = NULL;
    int n;
    NhapDS(a,n);
    XuatDS(a,n);
    return 0;
}