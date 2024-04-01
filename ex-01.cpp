#include <iostream>
#include <string>

using namespace std;

class SinhVien {
private:
    string hoTen;
    int tuoi;
    float diemTrungBinh;

public:
    void nhapThongTin() {
        cout << "Nhap ho va ten: ";
        getline(cin, hoTen);

        cout << "Nhap tuoi: ";
        cin >> tuoi;

        cout << "Nhap diem trung binh: ";
        cin >> diemTrungBinh;
    }

    void xuatThongTin() {
        cout << "Ho va ten: " << hoTen << endl;
        cout << "Tuoi: " << tuoi << endl;
        cout << "Diem trung binh: " << diemTrungBinh << endl;
    }
};

int main() {
    SinhVien sv;

    cout << "Nhap thong tin sinh vien: " << endl;
    sv.nhapThongTin();

    cout << "\nThong tin sinh vien vua nhap: " << endl;
    sv.xuatThongTin();

    return 0;
}