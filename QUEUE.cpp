#include<stdio.h>
#include<iostream>
#include<conio.h>
#define MAX 10

using namespace std;

struct Queue {
	int data[MAX];
	int head;
	int tail;
};

	Queue antrian;
void Create()
{
	antrian.head=antrian.tail=-1;
}

int IsEmpty()
{
	if(antrian.tail==-1)
		return 1;
	else
		return 0;
}

int IsFull()
{
	if(antrian.tail==MAX-1)
		return 1;
	else
		return 0;
}

void Enqueue(int data)
{
	if(IsEmpty()==1){
		antrian.head=antrian.tail=0;
		antrian.data[antrian.tail]=data;
		
		cout<<"Data sudah masuk ke antrian" <<endl;
	}
	else
		if(IsFull()==0){
			antrian.tail++;
			antrian.data[antrian.tail]=data;
			cout<<"data sudah masuk ke antrian"<<endl;
		}
}

int Dequeue()
{
	int e= antrian.data[antrian.head];
	for(int i=antrian.head; i<=antrian.tail-1;i++)
	
	{
		antrian.data[i]=antrian.data[i+1];

	}
	antrian.tail--;
	return e;
}

void Clear()
{
	antrian.head=antrian.tail=-1;
	cout<<"CLEAR"<<endl;
}

void Tampil()
{
	if(IsEmpty()==0)
	{
		for(int i=antrian.head;i<=antrian.tail;i++)
		{
			cout<<antrian.data[i]<<endl;
		}
	}
	else cout<<"Data kosong!"<<endl;
}

int main()
{
	int pil;
	int data;
	Create();
	do
	{
		cout<<endl;
		cout<<"==============================="<<endl;
		cout<<"PROGRAM QUEUE"<<endl;
		cout<<"==============================="<<endl;
		cout<<"1. ENQUEUE  "<<endl;
		cout<<"2. DEQUEUE  "<<endl;
		cout<<"3. TAMPIL   "<<endl;
		cout<<"4. CLEAR    "<<endl;
		cout<<"5. EXIT     "<<endl;
		cout<<"  Masukan Pilihan :" ;cin>>pil;
		cout<<endl;
		switch(pil){
			
			case 1: cout<<"Masukkan Data : ";cin>>data;
					Enqueue(data);
				break;
				
			case 2: Dequeue();
					cout<<"Data telah dihapus"<<endl;
				break;
			
			case 3: Tampil();
				break;
				
			case 4: Clear();
				break;
				
			case 5: cout<<endl<<"Terimakasih sudah menggunakan Program Queue";
				break;
			}
	}
	while (pil!=5);
	return 0;
}
