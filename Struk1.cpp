#include <iostream>
using namespace std;
struct mahasiswa
{
 string NIM;
 string Nama;
 string Prodi;
 float IPK;
};

int main()
{
 mahasiswa mhs;
 cout<< "DATA MAHASISWA"<<endl;
 cout<< "=============="<<endl;
 cout<<endl;
 cout<< "Masukan NIM  = ";
 cin>> mhs.NIM;
 cout<< "Masukan Nama  = ";
 cin>> mhs.Nama;
 cout<< "Masukan Prodi  = ";
 cin>> mhs.Prodi;
 cout<< "Masukan IPK  = ";
 cin>> mhs.IPK;
 
 cout<<endl;
 cout<< "======================"<<endl;
 cout<< "NIM  = "<<mhs.NIM<<endl;
 cout<< "Nama  = "<<mhs.Nama<<endl;
 cout<< "Prodi  = "<<mhs.Prodi<<endl;
 cout<< "IPK  = "<<mhs.IPK<<endl;
 cout<< "======================"<<endl;
 
 return 0;
}
