#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct TNode
{
 int data;
 TNode *next;
 TNode *prev;
};

TNode *head, *tail;
void init()
{
 head=tail=NULL;
}

int isEmpty()
{
 if(tail==NULL)
 return 1;
 else 
 return 0;
}
void insertD(int d)
{
 TNode *baru= new TNode;
 baru->data = d;
 baru->next = NULL;
 baru->prev = NULL;
 
 if(isEmpty()==1)
   {
    head=tail=baru;
    head->next=NULL;
    head->prev=NULL;
    tail->next=NULL;
    tail->prev=NULL;
   }
 else
   {
    baru->next=head;
    head->prev=baru;
    head=baru;
    }
    cout<<"Data Masuk\n";
}

void insertB(int d)
{
  TNode *baru= new TNode;
  baru->data=d;
  baru->next=NULL;
  baru->prev=NULL;
  
  if(isEmpty()==1)
  {
   head=tail=baru;
   head->next=NULL;
   head->prev=NULL;
   tail->next=NULL;
   tail->prev=NULL;
  }
  else
  {
   tail->next=baru;
   baru->prev=tail;
   tail=baru;
   tail->next=NULL;
  }
  cout<<"Data Masuk\n";
}

void tampil ()
{
 TNode *bantu;
 bantu=head;
 if (isEmpty()==0)
 {
  while (bantu!=tail->next)
  {
   cout<<bantu->data<<"->";
   bantu=bantu->next;
  }
  cout<<endl;
 }
 else cout <<"Data masih kosong\n";
 }

void hapusD()
{
 TNode *hapus;
 int d;
 if(isEmpty()==0)
 {
   if (head->next !=NULL)
   {
    hapus=head;
    d=hapus->data;
    head=head->next;
    head->prev=NULL;
    delete hapus;
   }
   else
   {
    d=head->data;
    head=tail=NULL;
   }
 cout<<d<<" Terhapus\n";
    }
    else cout<<"Masih kosong\n";
}

void hapusB()
{
 TNode *bantu, *hapus;
 int d;
 if(isEmpty()==0)
 {
   bantu=head;
   if (head->next !=NULL)
{
 hapus=tail;
 d=tail->data;
 tail=tail->prev;
 tail->next=NULL;
 delete hapus;
}
   else
   {
    d=head->data;
    head=tail=NULL;
   }
 cout<<d<<" Terhapus\n";
 }else cout<<"Masih kosong\n";
}

void clear()
{
 TNode *bantu,*hapus;
 bantu=head;
 while (bantu!=NULL)
 {
  hapus=bantu;
  bantu=bantu->next;
  delete hapus;
 }
 head=tail=NULL;
 cout<<"SEMUA DATA TELAH DIHAPUS\n";
}

main()
{
 int pil,d;
 
 do
 {
  system ("cls");
  cout<<endl<<endl;
  cout<<"  ==========================================="<<endl;
  cout<<"  = PROGRAM DOUBLE LINKED LIST NON CIRCULAR ="<<endl;
  cout<<"  ==========================================="<<endl;
  cout<<"  = 1. Insert Depan         		    ="<<endl;
  cout<<"  = 2. Insert Belakang      		    ="<<endl;
  cout<<"  = 3. Delete Depan         		    ="<<endl;
  cout<<"  = 4. Delete Belakang      		    ="<<endl;
  cout<<"  = 5. Tampil Data        	 	    ="<<endl;
  cout<<"  = 6. Clear                		    ="<<endl;
  cout<<"  = 7. Exit                 		    ="<<endl;
  cout<<"  ==========================================="<<endl;
  cout<<"  Masukan Pilihan : ";
  cin >>pil;
  switch (pil)
  {
   case 1: system ("cls");
   {
        cout<<"Masukan Data = ";
        cin >>d;
        insertD(d);
        break;
   }
   case 2: system ("cls");
   {
     cout<<"Masukan Data = ";
        cin >>d;
        insertB(d);
        break;
   }
      case 3: system ("cls");
      {
           cout<<"Masukan Data = ";
        cin >>d;
        hapusD();
        break;
   }
    case 4: system ("cls");
      {
           cout<<"Masukan Data = ";
        cin >>d;
        hapusB();
        break;
   }
   case 5: system ("cls");
   {       tampil();
     break;
   }
   case 6: system ("cls");
   {       clear();
     break;
   }
   case 7: 
   {
    return 0;
   }
       default : system ("cls");
       {
        cout<<"\n Maaf, Pilihan yang anda pilih tidak tersedia!";
    }
  }
  system("pause");
  
 }
 while(pil!=7);
 
}
