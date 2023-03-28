#include <iostream>
using namespace std;
int main ()
{
 string NIM, NAMA, KLS, SMTR, NH;
 string KodeMK[9], NamaMK[9];
 int SKS[9], NA[9], i;
 float mutu, bobot, TB=0, TSKS=0, IP;

 cout<<"Program Data Mahasiswa"<<endl;
 cout<<"NIM      : ", cin>>NIM;
 cout<<"Nama     : ", cin>>NAMA;
 cout<<"Kelas    : ", cin>>KLS;
 cout<<"Semester : ", cin>>SMTR;
 
 cout<<"---------------"<<endl;
 cout<<"Nilai Mahasiswa"<<endl;
 cout<<"---------------"<<endl;
 
 for (i=0;i<2;i++)
 {
  cout<<"Kode Mata Kuliah  "<<i+1<<":";
  cin>>KodeMK[i];
  cout<<"Nama Mata Kuliah  "<<i+1<<":";
  cin>>NamaMK[i];
  cout<<"Jumlah SKS  "<<i+1<<":";
  cin>>SKS[i];
  cout<<"Nilai Akhir "<<i+1<<":";
  cin>>NA[i];
 }
  
 for (i=0;i<2;i++)
 {
  if ((NA[i]>80)&&(NA[i]<=100))
  {
   NH="A";
   cout<<"Nilai Huruf : "<<NH<<endl;
   mutu=4;
   cout<<"MUTU = "<<mutu<<endl;
  }
  
  else if ((NA[i]>=76)&&(NA[i]<=80))
  {
   NH="A-";
   cout<<"Nilai Huruf : "<<NH<<endl;
   mutu=3.7;
   cout<<"MUTU = "<<mutu<<endl;
  }
  
  else if ((NA[i]>=72)&&(NA[i]<=75))
  {
   NH="B+";
   cout<<"Nilai Huruf : "<<NH<<endl;
   mutu=3.3; 
   cout<<"MUTU = "<<mutu<<endl;
  }
  
  else if ((NA[i]>=68)&&(NA[i]<=71))
  {
   NH="B";
   cout<<"Nilai Huruf : "<<NH<<endl;
   mutu=3;
   cout<<"MUTU = "<<mutu;
  }
  
  else if ((NA[i]>=64)&&(NA[i]<=67))
  {
   NH="B-";
   cout<<"Nilai Huruf : "<<NH<<endl;
   mutu=2.7;
   cout<<"MUTU = "<<mutu<<endl;
  }
  
  else if ((NA[i]>=60)&&(NA[i]<=63))
  {
   NH="C+";
   cout<<"Nilai Huruf : "<<NH<<endl;
   mutu=2.3;
   cout<<"MUTU = "<<mutu<<endl;
  }
  
  else if ((NA[i]>=56)&&(NA[i]<=59))
  {
   NH="C";
   cout<<"Nilai Huruf : "<<NH<<endl;
   mutu=2;
   cout<<"MUTU = "<<mutu<<endl;
  }
  
  else if ((NA[i]>=41)&&(NA[i]<=55))
  {
   NH="D";
   cout<<"Nilai Huruf : "<<NH<<endl;
   mutu=1;
   cout<<"MUTU = "<<mutu<<endl;
  }
  
  else 
  {
   NH="E";
   cout<<"Nilai Huruf : "<<NH<<endl;
   mutu=0;
   cout<<"MUTU = "<<mutu<<endl;
  }
 bobot=mutu*SKS[i];
 cout<<"Bobot : "<<bobot<<endl;
 TB=TB+bobot;
 cout<<"Total Bobot : "<<TB<<endl;
 TSKS=TSKS+SKS[i];
 cout<<"Total SKS : "<<TSKS<<endl;
 }
 IP=TB/TSKS;
 cout<<"IP : "<<IP<<endl;
 return 0;
}
