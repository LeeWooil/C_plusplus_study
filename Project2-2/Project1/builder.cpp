#include "builder.h"

Vacation:: Vacation() {
};
Vacation::~Vacation() {
};
void Vacation::bookHotels() {}
void Vacation::bookFlights() {}
void Vacation::bookTours() {}
Package1::Package1() {};
Package1::~Package1() {};
void Package1::bookHotels() {
	cout << "Hotels are booked." << endl;
}
void Package1::bookFlights(){
	cout << "Flights are booked." << endl;
}
void Package1::bookTours() {
	cout << "Run:" ;
}
Package2::Package2() {};
Package2::~Package2() {};
void Package2::bookHotels() {
	cout << "Hotels are booked." << endl;
}
void Package2::bookFlights() {

};
void Package2::bookTours() {
	cout << "Tours are booked.";
}
Package3::Package3() {};
Package3::~Package3() {};
void Package3::bookHotels() {
	cout << "Hotels are booked." << endl;
}
void Package3::bookFlights() {
	cout << "Flights are booked." << endl;
}
void Package3::bookTours() {
	cout << "Tours are booked." ;
}