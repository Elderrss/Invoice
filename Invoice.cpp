#include <iostream>
#include <string>
using namespace std;

int main(){
	
	//deklarasi variabel
	
	int pilih[100],jumlah[100],sub_total[100],harga[100];
	string menu[100];
	int total_bayar;
	int i=0;
	bool selesai=false;

	
	cout<<"*********DAFTAR MENU MAKANAN & MINUMAN BAKSO NIGGER***********"<<endl;
    cout<<"1. Bakso Hitam Biasa	                Rp.2.000.000"<<endl;
    cout<<"2. Bakso Hitam Jumbo	   	        Rp.1.500.000"<<endl;
    cout<<"3. Tea (Es/panas)			Rp.200.000"<<endl;
    cout<<"4. Jeruk (Es/panas)			Rp.300.000"<<endl;
    cout<<"5. Kopi Susu                            Rp.600.000"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    
	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
    
    while(selesai==false){
    	
    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];
    	
    	if (pilih[i]<=5){
    		
    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="Bakso Hitam Biasa     "; harga[i]=2000000; break;
		    		case 2 : menu[i]="Bakso Hitam Jumbo     "; harga[i]=1500000; break;
		    		case 3 : menu[i]="Tea (es/panas)  "; harga[i]=200000; break;
		    		case 4 : menu[i]="Jeruk (es/panas)"; harga[i]=300000; break;
		    		case 5 : menu[i]="Kopi Susu"; harga[i]=600000; break;
		    		default : menu[i]="";harga[i]=0;
				}
				
				cout<<"Jumlah Porsi "<<menu[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;
		    	
		    	sub_total[i]=jumlah[i]*harga[i];
		    	
		    	total_bayar+=sub_total[i];
	    		i++;
			}
		} else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}
    
	}
	
	cout<<endl;
	cout<<"                 INVOICE PEMBELIAN BAKSO NIGGER"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;
	

