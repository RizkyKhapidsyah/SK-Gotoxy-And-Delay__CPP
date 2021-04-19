#pragma warning (disable:4996)

#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>

/* Source by CppBuzz
* Error Repair & Modified by Rizky Khapidsyah
*/

using namespace std;

void delay(unsigned int mseconds) {
	clock_t goal = mseconds + clock();
	while (goal > clock());
}

void gotoxy(int x, int y) {
	COORD coord;

	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
	int m;
	int i = 0 , n, bny[5], kd[5];
	char jns[5][20];
	char nama[30];
	float hrg[5], jumhar[5];
	float jumbay, pajak, totbay, dis;

	char mad;
	mad = 'Y';
	
	while (mad == 'Y' || mad == 'y') {
		system("cls");

		for (m = 1; m < 10; m++) {
			delay(50);
			gotoxy(m - 1, 3); cout << ' ';
			gotoxy(m, 3); cout << " SELAMAT DATANG DI RENTAL MOBIL YOYO ";
		}
		
		cout << endl << endl;
		
		gotoxy(2, 5); cout << " | -------------------------------------------------------------------| " << endl;
		gotoxy(2, 6); cout << " | No Plat | Nama Mobil | | Supir | Harga Sewa | " << endl;
		gotoxy(2, 7); cout << " |--------------------------------------------------------------------| " << endl;
		gotoxy(2, 8); cout << " | 1. BM 1113 QW | Avanza | | Anton | Rp.250.000 | " << endl;
		gotoxy(2, 9); cout << " | 2. BM 1111 ER | Inova | | Juki | Rp.500.000 | " << endl;
		gotoxy(2, 10); cout << " | 3. BM 1101 RO | Apv | | Wandi | Rp.250.000 | " << endl;
		gotoxy(2, 11); cout << " | -------------------------------------------------------------------| " << endl;

		cout << "Nama \t\t\t:"; cin >> nama;
		cout << "Pilih Mobil [1/2/3]: \t\t"; cin >> kd[i];
		cout << "Berapa Lama Sewa \t\t: "; cin >> bny[i];

		switch (kd[i]) {
		case 1:
			strcpy(jns[i], "Avanza");
			hrg[i] = 250000;
			break;

		case 2:
			strcpy(jns[i], "Inova");
			hrg[i] = 500000;
			break;

		case 3:
			strcpy(jns[i], "Jazz");
			hrg[i] = 400000;
			break;

		default:
			strcpy(jns[i], "Mobil Tidak Tersedia");
			hrg[i] = 0;
			break;
		}

		jumhar[i] = bny[i] * hrg[i];
		cout << endl;
	}
	
	system("cls");

	gotoxy(4, 4); cout << "SELAMAT DATANG DI RENTAL MOBIL YOYO" << endl;
	gotoxy(4, 5); cout << "===============================================";
	gotoxy(4, 6); cout << "No Jenis Berapa Banyak Jumlah";
	gotoxy(4, 7); cout << " Mobil Lama Sewa Harga";
	gotoxy(4, 8); cout << "===============================================";
	jumbay = 0;

	n = 5;
	
	for (i = 1; i <= n; i++) {
		gotoxy(5, 8 + i); cout << i;
		gotoxy(10, 8 + i); cout << jns[i];
		gotoxy(20, 8 + i); cout << hrg[i];
		gotoxy(29, 8 + i); cout << bny[i];
		gotoxy(37, 8 + i); cout << jumhar[i];
		jumbay = jumbay + jumhar[i];
	}
	
	gotoxy(4, 14); cout << "===========================================";

	if (jumbay >= 100000) {
		dis = 0.2 * jumbay;
	} else {
		dis = 0;
	}
		
	pajak = 0.1 * jumbay;
	totbay = (jumbay + pajak) - dis;

	gotoxy(4, 16); cout << " Jumlah Bayar Rp: " << jumbay;
	gotoxy(4, 17); cout << " Jumlah Pajak Rp: " << pajak;
	gotoxy(4, 18); cout << " Diskon Rp: " << dis;
	gotoxy(4, 20); cout << " Total Bayar Rp: " << totbay;

	gotoxy(4, 22); cout << "Apakah Mau Mengulangi Program Rental Mobil ini (Y/T) :"; cin >> mad;

	system("cls");
	cout << endl << endl;
	cout << "TERIMA KASIH SUDAH MENYEWA MOBIL KAMI :)";

	_getch();
	return 0;
}