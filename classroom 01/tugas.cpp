#include <iostream>

using namespace std;

struct Kampus{//1struct secara terpisah
    string namakampus, alamatkampus;
    int tahunBerdiri;
};

struct Mahasiswa{
    /* member */
    string npm, nama, jurusan;
    int umur;
    Kampus kps;//1struct secara terpisah
    struct AlamatMhs{
        string jalan;
    }alamat;//struct digabungkan 
    string hobi[2];
};//mhs1, mhs2; //deklarasi global bisa diakses semua fungsi yang ada dibawah stattement struct

void cetakDataMahasiswa( Mahasiswa data){
 cout << "npm mahasiswa : " << data.npm << endl;
    cout << "nama mahasiswa : " << data.nama << endl;
    cout << "jurusan mahasiswa : " << data.jurusan << endl;
    cout << "umur mahasiswa : " << data.umur << endl;
    cout << "universitas mahasiswa : " << data.kps.namakampus << endl;
    cout << "alamat kampus : " << data.kps.alamatkampus << endl;
    cout << "tahun berdiri : " << data.kps.tahunBerdiri << endl;
    cout << "alamat mahasiswa : " << data.alamat.jalan << endl;
    cout << "hobi mahasiswa 1 : " << data.hobi[0] << endl;
    cout << "hobi mahasiswa 2 : " << data.hobi[1] << endl;
}
int main(){
    //Mahasiswa mhs3; <=deklarasi lokal hanya bisa diakses yang dideklarasikan saja
    //array dari stucture = dengan menggunakan array tidak perlu menulis deklarasi satu persatu

    Mahasiswa mhs[2];
    Kampus kampusnya = {"uenjehh", "jaksel,indonesia", 2003};//lebih enak menggunakan cara ini
    mhs[0].npm = "11856";
    mhs[0].nama = "yanto bakoel tahu";
    mhs[0].jurusan = "Pati Tayu";
    mhs[0].umur = 56;
    mhs[0].hobi[0] = "mancing";
    mhs[0].hobi[1] = "mancing emosi";
mhs[0].kps = kampusnya;
mhs[0].alamat.jalan = "jl.nin aja";

//panggil datanya dari function void
cetakDataMahasiswa(mhs[0]);

//-----------ceritanya ini dicut dipindahkan ke-void---------------//
    // cout << "npm mahasiswa : " << mhs[0].npm << endl;
    // cout << "nama mahasiswa : " << mhs[0].nama << endl;
    // cout << "jurusan mahasiswa : " << mhs[0].jurusan << endl;
    // cout << "umur mahasiswa : " << mhs[0].umur << endl;
    // cout << "universitas mahasiswa : " << mhs[0].kps.namakampus << endl;
    // cout << "alamat kampus : " << mhs[0].kps.alamatkampus << endl;
    // cout << "tahun berdiri : " << mhs[0].kps.tahunBerdiri << endl;
    // cout << "alamat mahasiswa : " << mhs[0].alamat.jalan << endl;
    // cout << "hobi mahasiswa 1 : " << mhs[0].hobi[0] << endl;
    // cout << "hobi mahasiswa 2 : " << mhs[0].hobi[1] << endl;


    cout << "\n\n" << endl;

    mhs[1].npm = "8526";
    mhs[1].nama = "yanto kopling";
    mhs[1].jurusan = "kalimantan";
    mhs[1].umur = 11;
    mhs[1].hobi[0] = "makan";
    mhs[1].hobi[1] = "turu";
mhs[1].kps = kampusnya;
mhs[1].alamat.jalan = "jl.sendiri aja";

   cetakDataMahasiswa(mhs[1]);

//############################  CARA LAMA  ###############################//
    // cout << "cara 1\n" << endl;
    // mhs1.npm = "4561728";
    // mhs1.nama = "yanto suratman";
    // mhs1.jurusan = "pati tayu";
    // mhs1.umur = 25;
    // mhs1.hobi[0] = "mancing";
    // mhs1.hobi[1] = "mancing emosi";


    // cout << "npm mahasiswa : " << mhs1.npm << endl;
    // cout << "nama mahasiswa : " << mhs1.nama << endl;
    // cout << "jurusan mahasiswa : " << mhs1.jurusan << endl;
    // cout << "umur mahasiswa : " << mhs1.umur << endl;
    // cout << "hobi mahasiswa 1 : " << mhs1.hobi[0] << endl;
    // cout << "hobi mahasiswa 2 : " << mhs1.hobi[1] << endl;

    // cout << "\cara 2" << endl;
    // mhs2 = {"17639712", "yanto kopling", "honolulu", 23, {"mancing", "jalan-jalan"}};
    // cout << "\nnpm mahasiswa : " << mhs2.npm << endl;
    // cout << "nama mahasiswa : " << mhs2.nama << endl;
    // cout << "jurusan mahasiswa : " << mhs2.jurusan << endl;
    // cout << "umur mahasiswa : " << mhs2.umur << endl;
    // cout << "hobi mahasiswa 1 : " << mhs2.hobi[0] << endl;
    // cout << "hobi mahasiswa 2 : " << mhs2.hobi[1] << endl;

    // cout << "\cara 3" << endl;
    // Mahasiswa mhs3 = {"849018274", "yanto galon", "sonean", 19, {"mancing", "ngloco"}};
    // cout << "\nnpm mahasiswa : " << mhs3.npm << endl;
    // cout << "nama mahasiswa : " << mhs3.nama << endl;
    // cout << "jurusan mahasiswa : " << mhs3.jurusan  << endl;
    // cout << "umur mahasiswa : " << mhs3.umur << endl;
    // cout << "hobi mahasiswa 1 : " << mhs3.hobi[0] << endl;
    // cout << "hobi mahasiswa 2 : " << mhs3.hobi[1] << endl;

};