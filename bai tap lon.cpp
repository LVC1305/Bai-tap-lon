#include <iostream>
#include <cstdlib> 
#include <string>  
using namespace std; 

struct Menu{
string	tamlikynang, quantrikinhdoanh, congnhethongtin, tongiaotamlinh, thethaovothuat, khoahockythuat, marketingbanhang, yogathien;
string  kientrucxaydung, triehoclyluan, phattrienbanthan, nonglamngu, khaitammotri, amthucnauan, yhocsuckhoe, vanhocnghethuat, tuviphongthuy; 
};
void inMenu(Menu &l){
 cout << "               " << "MENU SACH CO SAN TRONG THU VIEN" << "              " << endl;
 cout << " ** NOTE: khi muon xem sach trong moi quyen deu co ki hieu **" << endl; 
 cout << "Tam li ky nang (kh:1)" << l.tamlikynang << endl; 
 cout << "Quan tri kinh doanh (kh:2)" << l.quantrikinhdoanh << endl; 
 cout << "Cong nhe thong tin (kh:3)" << l.congnhethongtin << endl;
 cout << "Ton giao tam linh (kh:4)" << l.tongiaotamlinh << endl; 
 cout << "The thao vo thuat (kh:5)" << l.thethaovothuat << endl; 
 cout << "Khoa hoc ky thuat (kh:6)" << l.khoahockythuat << endl; 
 cout << "Marketing ban hang (kh:7)" << l.marketingbanhang << endl; 
 cout << "Yoga thien (kh:8)" << l.yogathien << endl; 
 cout << " Kien truc xay dung (kh:9)" << l. kientrucxaydung << endl; 
 cout << "Trihoc li luan (kh:0)" << l.triehoclyluan << endl; 
 cout << "Phat trien ban than (kh:a)" << l.phattrienbanthan << endl; 
 cout << "Nong lam ngu (kh:b)" << l.nonglamngu << endl; 
 cout << "Khai tam mo tri (kh:c)" << l.khaitammotri << endl; 
 cout << "am thuc nau an (kh:d)" << l.amthucnauan << endl; 
 cout << "Y hoc suc khoe (kh:e)" << l.yhocsuckhoe << endl; 
 cout << " Van hoc nghe thuat (kh:f)" << l. vanhocnghethuat << endl; 
 cout << "Tu vi phong thuy (kh:g)" << l.tuviphongthuy << endl;
 cout << endl; 
}
  
void nguoi1(int e){
	cout << " ban chi xem duoc giu lieu sach co trong thu vien ";
	cout << endl; 
}

struct chonsach {
    string n;
};
void nhapsach(chonsach a[], int n) {
    cin.ignore(); 
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". Sach muon chon: ";
        getline(cin, a[i].n);
    }
}

void xuatsach(chonsach a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i].n << " ";
    }
    cout << endl;
}

void lienket(const string& a) {
    switch (a[0]) {
        case '1':
            system("start https://thuviensach.vn/thu-vien/tam-ly-ky-nang/");
            break; 
        case '2': 
            system("start https://thuviensach.vn/thu-vien/quan-tri-kinh-doanh/");
            break;
        case '3':
            system("start https://thuviensach.vn/thu-vien/cong-nghe-thong-tin/");
            break; 
        case '4':
            system("start https://thuviensach.vn/thu-vien/ton-giao-tam-linh/");
            break; 
        case '5':
            system("start https://thuviensach.vn/thu-vien/the-thao-vo-thuat/");
            break; 
        case '6':
            system("start https://thuviensach.vn/thu-vien/khoa-hoc-ky-thuat/");
            break; 
        case '7':
            system("start https://thuviensach.vn/thu-vien/marketing-ban-hang/");
            break; 
        case '8':
            system("start https://thuviensach.vn/thu-vien/yoga-thien/");
            break; 
        case '9':
            system("start https://thuviensach.vn/thu-vien/kien-truc-xay-dung/");
            break; 
        case '0':
            system("start https://thuviensach.vn/thu-vien/triet-hoc-ly-luan/");
            break; 
        case 'a':
            system("start https://thuviensach.vn/thu-vien/phat-trien-ban-than/");
            break; 
        case 'b':
            system("start https://thuviensach.vn/thu-vien/nong-lam-ngu/");
            break; 
        case 'c':
            system("start https://thuviensach.vn/thu-vien/khai-tam-mo-tri/");
            break; 
        case 'd':
            system("start https://thuviensach.vn/thu-vien/am-thuc-nau-an/");
            break; 
        case 'e':
            system("start https://thuviensach.vn/thu-vien/y-hoc-suc-khoe/");
            break; 
        case 'f':
            system("start https://thuviensach.vn/thu-vien/van-hoc-nghe-thuat/");
            break; 
        case 'g':
            system("start https://thuviensach.vn/thu-vien/tu-vi-phong-thuy/");
            break; 
        default:
            cout << "Khong tim thay sach muon xem truoc." << endl;
    }
}
//***********************//**************************//*******************//
void nguoi2(int m){
	cout << " co the the sua doi thong tin trong thu vien: " << endl; 
}

struct NguoiDung {
    string tenDangNhap;
    string matKhau;
};

const int SO_LUONG_NGUOI_DUNG_TOI_DA = 100; 

void dangKyNguoiDung(NguoiDung nguoiDung[], int& soLuongNguoiDung) {
    if (soLuongNguoiDung < SO_LUONG_NGUOI_DUNG_TOI_DA) {
        cout << "Dang ki thong tin nguoi dung" << endl;
        cout << "Nhap ten dang nhap: ";
        cin >> nguoiDung[soLuongNguoiDung].tenDangNhap;
        cout << "Nhap mat khau: ";
        cin >> nguoiDung[soLuongNguoiDung].matKhau;
        soLuongNguoiDung++;
        cout << "Dang ki thanh cong!" << endl;
    } else {
        cout << "Khong the dang ki nguoi dung. Da dat gia tri toi da." << endl;
    }
}

bool dangNhapNguoiDung(const NguoiDung nguoiDung[], int soLuongNguoiDung) {
    string nhapTenDangNhap, nhapMatKhau;
    do {
        cout << "Nhap ten dang nhap: ";
        cin >> nhapTenDangNhap;

        cout << "Nhap mat khau: ";
        cin >> nhapMatKhau;

        for (int i = 0; i < soLuongNguoiDung; i++) {
            if (nhapTenDangNhap == nguoiDung[i].tenDangNhap && nhapMatKhau == nguoiDung[i].matKhau) {
                cout << "Dang nhap thanh cong!" << endl;
                return true;
            }
        }
        cout << "Dang nhap that bai. Ten dang nhap hoac mat khau khong chinh xac." << endl;
        cout << "Ban co muon dang nhap lai khong? (y/n): ";
        char luaChon;
        cin >> luaChon;
        if (luaChon != 'y' && luaChon != 'Y') {
            return false;
        }
    } while (true);
}

struct quanlisachtrongthuvien{
	string maso, tensach, chude, tacgia, nhaxuatban, ngaythangsanxuat, sotrang;
};

	void in(quanlisachtrongthuvien &b){
		cout << "           " << " Thong tin can nhap cho mot quyen sach " << "           " << endl;
		cout << " Ma so (isbn)" << b.maso << endl;
		cout << " Ten sach (title)" << b.tensach << endl;
		cout << " Chu de (subject)" << b.chude << endl;
		cout << " Ta gia (author)" << b.tacgia << endl;
		cout << " Nha xuat ban (publisher)" << b.nhaxuatban << endl;
		cout << " Ngay thang san xuat (date)" << b.ngaythangsanxuat << endl;
		cout << " So trang (payes)" << b.sotrang << endl;
		 cout << endl;

	}
	 
 void nhap(quanlisachtrongthuvien &c){
		cout << " nhap ma so (isbn): "; cin >> c.maso; 
		cin.ignore();
		cout << " Ten sach (title): " << c.tensach; getline(cin, c.tensach);
		cout << " Chu de (subject) " << c.chude; getline(cin, c.chude);
		cout << " Ta gia (author) " << c.tacgia;   getline(cin, c.tacgia);
		cout << " Nha xuat ban (publisher) " << c.nhaxuatban;   getline(cin, c.nhaxuatban);
 		cout << " nhap ngay thang xuat ban (publisher): "; cin >> c.ngaythangsanxuat;
		cout << " nhap so trang (payes): "; cin >> c.sotrang;	
	}

int main() {
    Menu l;
    inMenu(l);

    int chonnguoi;
    cout << "Chon nguoi 1(user) hoac nguoi 2(admin): ";
    cin >> chonnguoi;
    cin.ignore();

    if (chonnguoi == 1) {
    	int e; 
        nguoi1(e);
        chonsach a[100];
    int n;

    cout << "So sach ban can tim: ";
    cin >> n;

    nhapsach(a, n);
    cout << "Sach da chon: ";
    xuatsach(a, n);

    string p;
    cout << "Sach muon xem truoc: ";
    cin >> p;
    lienket(p);
    }

    if (chonnguoi == 2) {
    	  NguoiDung nguoiDung[SO_LUONG_NGUOI_DUNG_TOI_DA];
    int soLuongNguoiDung = 0;
    dangKyNguoiDung(nguoiDung, soLuongNguoiDung);
    dangNhapNguoiDung(nguoiDung, soLuongNguoiDung);

	int m; 
        nguoi2(m);
        
        quanlisachtrongthuvien b;
   in(b);

    quanlisachtrongthuvien c;
    nhap(c);
    }

    return 0;
}

