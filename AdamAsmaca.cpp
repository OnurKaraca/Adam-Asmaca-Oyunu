#include <string>
#include <iostream>


using namespace std;

string oyuncu1,oyuncu2,kelime,gizlikelime;
char tahmin;
int yanlis=0;
int cikis=1;




int main(){
while(cikis!=0)
{
	
		
	cout<<"----------ADAM ASMACA-------"<<endl;
	cout<<"1. Oyuncu : "<<endl;
	cin>>oyuncu1;
	cout<<"2. Oyuncu : "<<endl;
	cin>>oyuncu2;	
	
	cout<<oyuncu1<<" Lutfen "<<oyuncu2<<" Tahmin Edebilmesi Icin Kelime Gir:	"<<endl;
	cin>>kelime;
	
	while(gizlikelime.size()!=kelime.size()){
		gizlikelime.push_back('?');
		
	}
	
	for(int i=0;i<30;i++){
		cout<<endl;
	}
	
	cout<<"Girilen Kelime Gorulmesin Diye Bosluk Birakildi!"<<endl;
	
	do{
		cout<<"Bulunun Harfler: "<<endl;
		cout<<"****"<<gizlikelime<<"****"<<endl;
		cout<<"Tahmin Gir : ";
		cin>>tahmin;
		
		int x=kelime.length();
		
		for(int i=0;i<x;i++){
			if(tahmin==kelime[i]){
				gizlikelime[i]=tahmin;
				yanlis--;
			}
		}
	
		yanlis++;
		
		if(gizlikelime==kelime){
			cout<<"Oyunu Kazandiniz Tebrikler :)"<<endl;
			cout<<"Gizli Kelime : "<<kelime<<endl;
			break;
		}
		
		if(yanlis==1){
			cout << "I"<< endl;
			cout<<endl;
		}
		else if(yanlis==2){	
			cout << "I" << endl;
			cout << "I" << endl;
			cout<<endl;
		}
		else if(yanlis==3){
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout<<endl;
		}
		else if(yanlis==4){
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout<<endl;
		}
		else if(yanlis==5){
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout<<endl;
		}
		else if(yanlis==6){
			cout << "I===" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout<<endl;
		}
		else if(yanlis==7){
			cout << "I===" << endl;
			cout << "I  O"<< endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout<<endl;
		}
		else if(yanlis==8){
			cout << "I===" << endl;
			cout << "I  O"<< endl;
			cout << "I  |"<< endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout<<endl;
		}
		else if(yanlis==9){
			cout << "I===" << endl;
			cout << "I  O"<< endl;
			cout << "I -|"<< endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout<<endl;
		}
		else if(yanlis==10){
			cout << "I===" << endl;
			cout << "I  O"<< endl;
			cout << "I -|-"<< endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout<<endl;
		}
		else if(yanlis==11){
			cout << "I===" << endl;
			cout << "I  O"<< endl;
			cout << "I -|-"<< endl;
			cout << "I /" << endl;
			cout << "I" << endl;
			cout<<endl;
		}
		else if(yanlis==12){
			cout << "I===" << endl;
			cout << "I  O"<< endl;
			cout << "I -|-"<< endl;
			cout << "I | |" << endl;
			cout<<endl;
			cout<<"Asildinnnn!!!!"<<endl;
			cout<<"Gizli Kelime : "<<kelime<<endl;
		}
				
	}
	while(yanlis<12);
	cout<<"Cikis icin 0 basiniz : \n (Devam Etmek Icin Herhangi Bir Sayi Basiniz : ) "<<endl;
	cin>>cikis;
	gizlikelime==kelime;
	if(cikis==0){
		break;
	}
}
}
