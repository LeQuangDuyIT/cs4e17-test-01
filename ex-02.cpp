#include <iostream>
#include <vector>
#include <string>
using namespace std;

class SinhVien {
private:
    string maSV;
    string tenSV;
    int tuoi;

public:
    SinhVien(string ma, string ten, int age) {
        maSV = ma;
        tenSV = ten;
        tuoi = age;
    }

    string getMaSV() {
        return maSV;
    }

    string getTenSV() {
        return tenSV;
    }

    int getTuoi() {
        return tuoi;
    }
};

int main() {
    vector<SinhVien> danhSachSinhVien;

    int choice;
    do {
        cout << "===== Quan Ly Danh Sach Sinh Vien =====" << endl;
        cout << "1. Them sinh vien" << endl;
        cout << "2. Xoa sinh vien" << endl;
        cout << "3. Hien thi danh sach sinh vien" << endl;
        cout << "0. Thoat" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string maSV, tenSV;
                int tuoi;
                cout << "Nhap ma sinh vien: ";
                cin >> maSV;
                cout << "Nhap ten sinh vien: ";
                cin.ignore();
                getline(cin, tenSV);
                cout << "Nhap tuoi sinh vien: ";
                cin >> tuoi;

                SinhVien sv(maSV, tenSV, tuoi);
                danhSachSinhVien.push_back(sv);

                cout << "Them sinh vien thanh cong!" << endl;
                break;
            }
            case 2: {
                string maSV;
                cout << "Nhap ma sinh vien can xoa: ";
                cin >> maSV;

                bool found = false;
                for (int i = 0; i < danhSachSinhVien.size(); i++) {
                    if (danhSachSinhVien[i].getMaSV() == maSV) {
                        danhSachSinhVien.erase(danhSachSinhVien.begin() + i);
                        found = true;
                        break;
                    }
                }

                if (found) {
                    cout << "Xoa sinh vien thanh cong!" << endl;
                } else {
                    cout << "Khong tim thay sinh vien co ma so " << maSV << endl;
                }
                break;
            }
            case 3: {
                cout << "Danh sach sinh vien:" << endl;
                for (int i = 0; i < danhSachSinhVien.size(); i++) {
                    cout << "Ma SV: " << danhSachSinhVien[i].getMaSV() << endl;
                    cout << "Ten SV: " << danhSachSinhVien[i].getTenSV() << endl;
                    cout << "Tuoi: " << danhSachSinhVien[i].getTuoi() << endl;
                    cout << "------------------------" << endl;
                }
                break;
            }
            case 0: {
                cout << "Thoat chuong trinh." << endl;
                break;
            }
            default: {
                cout << "Lua chon khong hop le!" << endl;
                break;
            }
        }
    } while (choice != 0);

    return 0;
}