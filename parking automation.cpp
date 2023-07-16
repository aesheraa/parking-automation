


#include "stdafx.h"

#include<iostream>
#include<string>
#include<conio.h>
#include<cmath>
#include<ctime>

#define MAX 100 

using namespace std;

 class vehicle{

 public :
	 string plaka;
	 string kisi_ad, kisi_soyad, kisi_tel ;

	 time_t giris;
}

 car[MAX];
 class otopark {
 pýblic:

	 string gorevli_id, gorevli sifre;
	 int i, gelir;
	 otopark(string id, string s) {

		 gorevli_id = id;
		 gorevli_sifre = s;
		 gelir = 0;
		 i = -1;
	 }
	 void menu() {

		 int secim;
		 cout << " OTOPARK PROGRAMI" << endl;
		 cout << "----------------------------" << endl;
		 cout << " 1. yeni arac"<< endl;
		 cout << " 2. yeni cikis" << endl;
		 cout << " 3. arac listele " << endl;
		 cout << "4. rapor" << endl;
		 cout << "5. cikis" << endl;

		 secim = getch();
		 switch (secim) {
		 case'1': yeni();

			 break;

		 case'2': cikar();
			 break;

		 case'3': listele();
			 break;
		 case'4': rapor();
			 break;

		 case'5': exit(0);
			 default :cout << "hatali secim !!!" << endl;

				 system("pause");
				 system("cls");
				 menu();
				 break;
		 }
	 }

	 void yeni() {

		 system("cls");
		 i++;


		 cout << " arac sahibinin adi" << endl;
		 cin >> car[i].kisi_ad;
		 cout << " arac sahibi soyadi";
		 cin >> car[i].kisi_soyad;
		 cout << " arac sahibi tel:";
		 cin >> car[i].kisi_tel;

		 cout << " aracin plakasi ";
		 cin >> car[i].plaka;

		 cout << "islem basarili" << endl;
		 time(&car[i].giris);
		 system("pause");

		 system("cls");

		 menu();
	 }

	 void cikar() {

		 system("cls");
		 bool buldu = false;

		 int j = 0, k, saat;
		 double sure;
		 time_t cikis;
		 string plka;
		 time(&cikis);


		 cout << "plaka girin:";
		 cin >> plka;
		 while (j <= i) {

			 if (car[j].plaka == plka) {

				 sure = difftime(cikis, car[j].giris);
				 for (k = j; k <= i; k++) {

					 car[k] = car[k + 1];

				 }

				 i--;
				 buldu = true;
				 break;
			 }

			 j++;
		 }

		 if (buldu == true) {

			 cout << "plaka bulunamadi!" << endl;
			 system("pause");
			 system("cls");
			 menu();
		 }

		 sure = sure / 3600;
		 saat = ceil(sure);

		 cout << "ucret=" << saat * 5 << "TL" << endl;
		 gelir += saat * 5;
		 system("pause");
		 system("cls");
		 menu();
	 }

	 void listele() {

		 system("cls");
		 for (int j = 0; j <= i; j++) {

			 cout << car[j].plaka << endl;
		 }

		 system("pause");
		 system("cls");
		 menu();
	 }

	 void rapor() {

		 system("cls");
		 cout << "suanki gelir:" << gelir << "tTL" << endl;

		 system("pause");
		 system("cls");
		 menu();
	 }
 };


 int main() {

	 otopark calisan( " burhan turk ", "7br7");
	 string ad, sifre;
	 int i = 0;

	 cout << "OTOPARK PROGRAMi" << endl;

	 while (1) {

		 cout << "kullanici adini girin" << endl;
		 cin >> ad;
		 cout << " sifreyi girin";
		 cin >> sifre;

		 if( calisan.gorevli_id == ad )
			 if (calisan.gorevli_sifre == sifre) {

				 cout << "sifre dogru";
				 system("pause");
				 break;

			 }

		 cout << "tekrar deneyin plss " << endl;
		 system("pause");
		 system("cls");

	 }

	 system("cls");
	 calisan.menu ();
	 system("pause");
	 return 0;

 }


