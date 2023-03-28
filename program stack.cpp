#include <iostream>

#define MAX_STACK 10

using namespace std;

struct STACK
{int top;
 string data[10];
 };
 
STACK tumpuk;

void inisialisasi()
{ tumpuk.top= -1;}

int IsFull()
{
 if(tumpuk.top== MAX_STACK-1)
  return 1;
 else
  return 0;
}

int IsEmpty()
{
 if(tumpuk.top == -1)
  return 1;
 else
  return 0;
}

void push(string d)
{ tumpuk.top++;
  tumpuk.data[tumpuk.top]=d;
}

void pop()
{ cout<<"Elemen terakhir Stack sudah dihapus, yaitu : "<<tumpuk.data[tumpuk.top]<<endl;

   tumpuk.top--; }
   
void clear()
{tumpuk.top=-1; }

void TampilStack()
{
 for(int i=tumpuk.top;i>=0;i--)
 { cout<<"Data : "<<tumpuk.data[i]<<endl; }
}

int main()
{
 int pil;
 inisialisasi();
 string dt;
 
do{
 cout<<endl;
 cout<<"PILIHAN PROSES\n";
 cout<<"[1] Masukan Data\n";
 cout<<"[2] Hapus Data\n";
 cout<<"[3] Tampil isi Stack\n";
 cout<<"[4] Mereset stack\n";
 cout<<"[5] keluar\n";
 cout<<"Masukan kode pilihan (1 ... 5) : ";
 cin>>pil;
 cout<<endl;
 
 switch(pil)
 {
  case 1: if(IsFull() != 1)
  { cout<<"Masukan Data : ";
    cin>>dt;
    push(dt);
    cout<<endl;}
  else 
    cout<<"\n Sudah Penuh, Push gagal! \n";
  break;
  
  case 2: if(IsEmpty() != 1)
   pop();
  else
   cout<<"\nMasih Kosong!\n";
  break;
  
  case 3: if(IsEmpty() != 1)
   TampilStack();
  else 
   cout<< "\n Stack Kosong!\n";
  break;
   
  case 4: clear();
   cout<<"\n Stack sudah dihapus!\n";
  break;
  }
 } while(pil!=5);
  return 0; 
}
