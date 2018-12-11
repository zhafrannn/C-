#include<iostream>
using namespace std;
int main()
{
	int a[2][2], b[2][2], d[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<< "masukan nilai array " <<i<<"."<<j << " : ";
			cin>> a[i][j];
	}
}
	for(int x=0;x<2;x++){
		for(int y=0;y<2;y++){
			cout<< "masukan nilai array "<<x<<"."<<y << " : ";
			cin>> b[x][y];
	}
	}
	cout<< "Ordo A \n";
	for(int i=0; i<2;i++){
		for(int j=0; j<2;j++){
			cout<< " " << a[i][j] << " ";
		}
	cout<< endl;
	}
	cout<< "Ordo B \n";
	for(int x=0; x<2;x++){
		for(int y=0; y<2;y++){
			cout<< " " << b[x][y] << " ";
		}
	cout<< endl;
	}
	
	d[0][0] = (a[0][0]*b[0][0])+(a[0][1]*b[1][0]);
	d[0][1] = (a[0][0]*b[0][1])+(a[0][1]*b[1][1]);
	d[1][0] = (a[1][0]*b[0][0])+(a[1][1]*b[1][0]);
	d[1][1] = (a[1][0]*b[0][1])+(a[1][1]*b[1][1]);
	
	cout<< "Ordo A x Ordo B \n";
	for(int i=0; i<2;i++){
		for(int j=0; j<2;j++){
			cout<< " " << d[i][j] << " ";
		}
		cout<< endl; 
	}
}
	
