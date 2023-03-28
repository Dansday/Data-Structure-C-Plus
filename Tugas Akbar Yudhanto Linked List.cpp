#include <iostream>
#include <stdlib.h>
namespace std{}
using namespace std;

struct node{
	int info;
	struct node *linked;
};

struct node *depan(struct node *mulai, int angka);
void belakang (struct node *mulai, int angka);
void tampil(struct node *mulai);

main()
{
	struct node *mulai = NULL;
	int pilihan, angka;
	
	while(1)
	{
		
		cout<<"\n1. Tambahkan Node(Depan)\n";
		cout<<"2. Tambahkan Node(Belakang)\n";
		cout<<"3. Tampilkan Linked List\n";
		cout<<"4. Tutup Program\n\n";
		cout<<"Masukkan Pilihan : ";
		cin>>pilihan;
		switch(pilihan)
		{
			case 1:
				cout<<"Masukkan Angka : ";
				cin>>angka;
				mulai=depan(mulai, angka);
				break;
			
			case 2:
				cout<<"Masukkan Angka : ";
				cin>>angka;
				belakang(mulai, angka);
				break;
				
			case 3:
				tampil(mulai);
				break;
				
			case 4:
				exit(1);
				
			default:
				cout<<"Pilihan Tidak Tersedia\n";
		}
	}
}

struct node *depan(struct node *mulai, int angka)
{
	struct node *d;
	d=(struct node *)malloc(sizeof(struct node)); 
	d->info=angka;
	d->linked=mulai;
	mulai=d;
	return mulai;
}

void belakang (struct node *mulai, int angka)
{
	struct node *d, *b;
	d=(struct node *)malloc(sizeof(struct node));
	d->info=angka;
	b=mulai;
	while(b->linked != NULL)
		{
		b=b->linked;
	    }
    b->linked=d;
    d->linked=NULL;
    
}

void tampil(struct node *mulai)
{
	if(mulai==NULL)
	{
		cout<<"List Kosong\n\n";
		return;
	}
		while (mulai != NULL)
		{
			cout<<mulai->info<<"->";
			mulai=mulai->linked;
		}
}
