#include <iostream>
using namespace std;

class TaiKhoanNganHang {
private:
    double soDu;

public:
    TaiKhoanNganHang(double soDuBanDau) {
        soDu = soDuBanDau;
    }

    void napTien(double soTien) {
        soDu += soTien;
        cout << "Nap tien thanh cong!" << endl;
    }

    void rutTien(double soTien) {
        if (soTien <= soDu) {
            soDu -= soTien;
            cout << "Rut tien thanh cong!" << endl;
        } else {
            cout << "So du khong du!" << endl;
        }
    }

    void hienThiSoDu() {
        cout << "So du trong tai khoan la: " << soDu << endl;
    }
};

int main() {
    double soDuBanDau;
    cout << "Nhap so du ban dau: ";
    cin >> soDuBanDau;

    TaiKhoanNganHang taiKhoan(soDuBanDau);

    int choice;
    do {
        cout << "===== Quan Ly Tai Khoan Ngan Hang =====" << endl;
        cout << "1. Nap tien" << endl;
        cout << "2. Rut tien" << endl;
        cout << "3. Hien thi so du" << endl;
        cout << "0. Thoat" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double soTien;
                cout << "Nhap so tien can nap: ";
                cin >> soTien;
                taiKhoan.napTien(soTien);
                break;
            }
            case 2: {
                double soTien;
                cout << "Nhap so tien can rut: ";
                cin >> soTien;
                taiKhoan.rutTien(soTien);
                break;
            }
            case 3: {
                taiKhoan.hienThiSoDu();
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