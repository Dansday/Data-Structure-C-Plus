#include <iostream>
using namespace std;
int main()
{
char nim[20],nama[20],kelas[20],smt[20];
string komtk[9],namatkul[9];
string nh;
int sks[9],na[9];
float mutu,bobot,tb=0;
float tsks=0,ip;
int i;
 
cout<<"Data IP Mahasiswa"<<endl;
cout<<"-----------------"<<endl;
cout<<"NIM  = ";
cin>>nim;
cout<<"Nama  = ";
cin>>nama;
cout<<"Kelas  = ";
cin>>kelas;
cout<<"Semester = ";
cin>>smt;
cout<<endl;
cout<<"Nilai Mahasiswa"<<endl;
cout<<"----------------"<<endl;
 
for (i=0;i<9;i++)
 {
  cout<<"Kode Matakuliah ke - "<<i+1<<" = ";
  cin>>komtk[i];
  cout<<"Nama Matakuliah ke - "<<i+1<<" = ";
  cin>>namatkul[i];
  cout<<"Banyak SKS      ke - "<<i+1<<" = ";
  cin>>sks[i];
  cout<<"Nilai Akhir     ke - "<<i+1<<" = ";
  cin>>na[i];
  cout<<endl;
 }
  cout<<"============================================DATA NILAI MAHASISWA======================================================"<<endl;
  cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
  cout<<"No      KODE MATKUL          MATA KULIAH          SKS        NILAI Akhir        NILAI HURUF        MUTU         BOBOT"<<endl;
  cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
  for(i=0;i<9;i++)
  {
  if ((na[i]>80)&&(na[i]<=100))
  {
   nh="A";
   mutu=4;
  }
  
  else if ((na[i]>=76)&&(na[i]<=80))
  {
   nh="A-";
   mutu=3.7;
  }
  
  else if ((na[i]>=72)&&(na[i]<=75))
  {
   nh="B+";
   mutu=3.3; 
  }
  
  else if ((na[i]>=68)&&(na[i]<=71))
  {
   nh="B";
   mutu=3;
  }
  
  else if ((na[i]>=64)&&(na[i]<=67))
  {
   nh="B-";
   mutu=2.7;
  }
  
  else if ((na[i]>=60)&&(na[i]<=63))
  {
   nh="C+";
   mutu=2.3;
  }
  
  else if ((na[i]>=56)&&(na[i]<=59))
  {
   nh="C";
   mutu=2;
  }
  
  else if ((na[i]>=41)&&(na[i]<=55))
  {
   nh="D";
   mutu=1;
  }
  
  else 
  {
   nh="E";
   mutu=0;
  }
  bobot=mutu*sks[i];
  tsks=tsks+sks[i];
   cout<<i+1<<"    "<<"      "<<komtk[i]<<"                 "<<namatkul[i]<<"               "<<sks[i]<<"           "<<na[i]<<"                  "<<nh<<"               "<<mutu<<"               "<<bobot<<""<<endl;
    tb=tb+bobot;
  } 
  cout<<"-----------------------------------------------------------------------------------------------"<<endl;
 cout<<"Total Bobot : "<<tb<<endl;
 cout<<"Total SKS : "<<tsks<<endl;
 ip=tb/tsks;
 cout<<"IP : "<<ip<<endl;
 return 0;
}
