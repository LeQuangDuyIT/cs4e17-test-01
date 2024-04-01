#include <iostream>
using namespace std;

class HinhTron {
private:
    double banKinh;

public:
    HinhTron(double r) {
        banKinh = r;
    }

    double tinhDienTich() {
        return 3.14159 * banKinh * banKinh;
    }

    double tinhChuVi() {
        return 2 * 3.14159 * banKinh;
    }
};

int main() {
    double banKinh;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> banKinh;

    HinhTron hinhTron(banKinh);

    int choice;
    do {
        cout << "1. Tinh dien tich" << endl;
        cout << "2. Tinh chu vi" << endl;
        cout << "0. Thoat" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double dienTich = hinhTron.tinhDienTich();
                cout << "Dien tich hinh tron: " << dienTich << endl;
                break;
            }
            case 2: {
                double chuVi = hinhTron.tinhChuVi();
                cout << "Chu vi hinh tron: " << chuVi << endl;
                break;
            }
            case 0: {
                cout << "Ket thuc chuong trinh. Tam biet!" << endl;
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