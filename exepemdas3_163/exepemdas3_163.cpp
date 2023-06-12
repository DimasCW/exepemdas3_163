#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; // variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { // constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input 
	virtual float Luas() { return 0; } // fungsi untuk menghitung luas
	virtual float Keliling() { return 0; } // fungsi untuk menghitung keliling
	void setX(int a) { // fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { // fungsi untuk membaca/mengambil nilai dalam x, enkapsulasi
		return x;
	}
};

class Lingkaran : public bidangDatar {
public:
	float Luas() {
		return (getX() * getX() * 3.14); //rumus Luas = pi * r^2
	}
	float Keliling() {
		return (2 * getX() * 3.14); //rumus Keliling = 2 * pi * r
	}
	void input() {
		int a;
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukkan jejari: ";
		cin >> a;
		setX(a); 
		cout << "Luas Lingkaran = " << Luas() << endl;
		cout << "Keliling Lingkaran = " << Keliling() << endl;
	}
};

class Bujursangkar : public bidangDatar {
public:
	float Luas() {
		return (getX() * getX()); // rumus Luas = sisi^2
	}
	float Keliling() {
		return (4 * getX()); // rumus Keliling = 4 * sisi
	}
	void input() {
		int a;
		cout << "\nBujursangkar dibuat" << endl;
		cout << "Masukkan sisi: ";
		cin >> a;
		setX(a);
		cout << "Luas Bujursangkar = " << Luas() << endl; 
		cout << "Keliling Bujursangkar = " << Keliling() << endl; 
	}
};

int main() {
	bidangDatar* bi;
	Lingkaran Li;
	Bujursangkar Bu;

	bi = &Li; 
	bi->input(); 
	bi = &Bu; 
	bi->input(); 

	return 0;
}


