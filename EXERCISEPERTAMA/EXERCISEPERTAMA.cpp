#include <iostream>
using namespace std;

string kandidat[20] = { "Kani", "Zora", "Lord", "Dark", "Puki", "Sams", "Rext", "Hanz", "Lait", "Rfal", "Sans", "Levy", "Duby", "Axsy", "Sway", "Cili", "Pepe", "Geny", "Zava", "Zars" }; //mendeklarasikan sebuah variabel bertipe string dengan jumlah maksimal 20
double nilai_bahasa[20]; //mendeklarasikan sebuah variabel bertipe double dengan jumlah maksimal 20
double nilai_matematika[20]; //mendeklarasikan sebuah variabel bertipe double dengan jumlah maksimal 20
int diterima = 0; //mendeklarasikan sebuah variabel bertipe integer dengan nilai awal 0
int ditolak = 0; //mendeklarasikan sebuah variabel bertipe integer dengan nilai awal 0

void input() { // membuat fungsi yang tidak mengembalikan nilai 
	cout << "------------------------------------" << endl; // menampilkan output ke layar
	cout << "Masukan nilai masing-masing kandidat" << endl; // menampilkan output ke layar
	cout << "------------------------------------" << endl; // menampilkan output ke layar

	for (int i = 0; i < 20; i++) { // membuat sebuah perulangan "for" dengan nilai  awal i: 0, batasan i: 20, dan i++
		cout << "Masukan nilai bahasa inggris " << kandidat[i] << " : "; // memasukan nilai bahasa inggris dari kandidat i
		cin >> nilai_bahasa[i]; // menyimpan nilai bahasa inggris dari kandidat i
		cout << "Masukan nilai mateamtika " << kandidat[i] << " : "; // memasukan nilai matematika dari kandidat i
		cin >> nilai_matematika[i]; // menyimpan nilai matematika dari kandidat i
	}

	cout << "\n---------------" << endl; // menampilkan output ke layar 
	cout << "NAMA     STATUS" << endl; // menampilkan output ke layar
	cout << "---------------" << endl; // menampilkan output ke layar
}
double rerata(double a, double b) { // membuat fungsi yang mengembalikan nilai bertipe double 
	return (a + b) / 2; // mengembalikan nilai (a + b) / 2
}

void proses() { // membuat fungsi yang tidak mengembalikan nilai 
	for (int i = 0; i < 20; i++) { // membuat sebuah perulangan "for" dengan nilai  awal i: 0, batasan i: 20, dan i++ 
		if (rerata(nilai_bahasa[i], nilai_matematika[i]) >= 70 || nilai_matematika[i] > 80) { // membuat sebuah kondisi yang diterima
			cout << kandidat[i] << "     Diterima" << endl;
			diterima++; // menambahkan 1 di variabel "diterima"
		}
		else { // membuat kondisi yang ditolak
			cout << kandidat[i] << "     Ditolak" << endl;
			ditolak++; // menambahkan 1 di variabel "ditolak"
		}
	}
}

void output() { // membuat fungsi yang tidak mengembalikan nilai
	cout << "\n---------------------------------" << endl; // menampilkan output ke layar
	cout << "Total kandidat yang diterima : " << diterima << endl; // menampilkan kandidat yang diterima
	cout << "Total kandidat yang ditolak  : " << ditolak << endl; // menampilkan kandidat yang ditolak
	cout << "---------------------------------" << endl; // menampilkan output ke layar
}

int main() { // fungsi pertama yang akan dijalankan pertamakali
	input(); // memanggil function input()
	proses(); // memanggil function proses()
	output(); // memanggil function output()
	return 0;
}