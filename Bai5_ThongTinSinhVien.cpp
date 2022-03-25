#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

typedef struct SinhVien
{
    char HoTen[51];
    float DiemToan;
    float DiemVan;
}SV;

void Nhap1SV(SV &a)
{
    cout << "Moi ban nhap vao thong tin sinh vien: " << endl;
    cout << "Nhap ho va ten sinh vien: ";
    cin.getline(a.HoTen,51);

    cout << "\nNhap diem toan: ";
    cin >> a.DiemToan;

    cout << "\nNhap diem van: ";
    cin >> a.DiemVan;
}

float DiemTrungBinh(SV a)
{
    return (a.DiemToan + a.DiemVan) / 2;
}

void Xuat1SV(SV a)
{
    cout << "\nThong tin sinh vien vua nhap: " << endl;
    cout.precision(2);
    cout << a.HoTen << "\t" << a.DiemToan << "\t" << a.DiemVan << "\t" << DiemTrungBinh(a);
}

int main()
{
    SV a;
    Nhap1SV(a);
    Xuat1SV(a);
    return 0;
}