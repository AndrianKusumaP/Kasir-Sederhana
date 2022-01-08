#include <iostream>

using namespace std;

int pilih,tambah,jml,tot,diskon,bayar,kembali,total;
string menu[13] = {"Kopi Bali\t\t= Rp. 15.000","Americano\t\t= Rp. 18.000","Coffe Latte\t\t= Rp. 18.000","Piccolo\t\t= Rp. 18.000","Coffe Latte Caramel\t= Rp. 20.000","Coffe Latte Vanilla\t= Rp. 20.000","Red Velvet\t\t= Rp. 20.000","Matcha\t\t= Rp. 23.000","Moccacino\t\t= Rp. 23.000","Pisang Goreng\t= Rp. 10.000","Kentang Goreng\t= Rp. 15.000","Roti Bakar\t\t= Rp. 10.000","Jasuke\t\t= Rp. 15.000"};
int harga[13] = {15000,18000,18000,18000,20000,20000,20000,23000,23000,10000,15000,10000,15000};

int main(){
    
    ulang:
    cout<<"=======Welcome to Resuma's Cafe======="<<endl;
    cout<<"================Drinks================"<<endl;
    for(int i=0;i<9;i++){
        cout<<i+1<<".  "<<menu[i]<<endl;
    }cout<<"================Snacks================"<<endl;
    for(int i=9;i<13;i++){
        cout<<i+1<<". "<<menu[i]<<endl;
    }
    cout<<"Masukkan Pilihan Anda = ";
    cin>>pilih;
    switch(pilih){
        case 1:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[0]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        case 2:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[1]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        case 3:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[2]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        case 4:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[3]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        case 5:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[4]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        case 6:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[5]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        case 7:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[6]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        case 8:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[7]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        case 9:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[8]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        case 10:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[9]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        case 11:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[10]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        case 12:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[11]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        case 13:
            cout<<"Masukkan Jumah yang Akan Dibeli : ";
            cin>>jml;
            tot += harga[12]*jml;
            cout<<"Ingin Menambah Pesanan?\n1. Iya\n2. Tidak\nPilihan = ";
            cin>>tambah;
            if(tambah == 1){
                system("cls");
                goto ulang;
            }else
                goto selesai;
        default:
            cout<<"Angka Yang Anda Masukkan Salah"<<endl;
            system("cls");
            goto ulang;
    }selesai:
        cout<<"Total Biaya yang Harus Anda Bayar : Rp."<<tot<<endl;
        retry:
        if(tot >= 100000){
            diskon = tot*0.15;
            total = tot-diskon;
            cout<<"Selamat Anda Mendapatkan Diskon 15%"<<endl;
            cout<<"Total Biaya yang Harus Anda Bayar Setelah Diskon : Rp."<<total<<endl;
            cout<<"Bayar : Rp.";
            cin>>bayar;
                if(bayar<total){
                cout<<"Uang Yang Anda Masukkan Kurang"<<endl;
                goto retry;
                }else{
                kembali = bayar-total;
                cout<<"Kembalian Anda : Rp."<<kembali<<endl;
                }
        }else if(tot >= 50000){
            diskon = tot*0.1;
            total = tot-diskon;
            cout<<"Selamat Anda Mendapatkan Diskon 10%"<<endl;
            cout<<"Total Biaya yang Harus Anda Bayar Setelah Diskon: Rp."<<total<<endl;
            cout<<"Bayar : Rp.";
            cin>>bayar;
                if(bayar<total){
                cout<<"Uang Yang Anda Masukkan Kurang"<<endl;
                goto retry;
                }else{
                kembali = bayar-total;
                cout<<"Kembalian Anda : Rp."<<kembali<<endl;
                }
        }else{
            cout<<"Bayar : Rp.";
            cin>>bayar;
                if(bayar<tot){
                cout<<"Uang Yang Anda Masukkan Kurang"<<endl;
                goto retry;
                }else{
                kembali = bayar-tot;
                cout<<"Kembalian Anda : Rp."<<kembali<<endl;
                }
        }
    cout<<"=============================================="<<endl;
    cout<<"Terima Kasih Telah Berbelanja di Resuma's Cafe"<<endl;
    cout<<"         Silahkan Berkunjung Kembali          "<<endl;
    cout<<"=============================================="<<endl;
}