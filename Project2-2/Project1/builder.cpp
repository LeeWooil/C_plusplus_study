#include "builder.h"

Vacation:: Vacation() {
};
Vacation::~Vacation() {
};
void Vacation::bookHotels() {
	cout << "Hotels are booked." << endl;
}
void Vacation::bookFlights() {
	cout << "Flights are booked." << endl;
}
void Vacation::bookTours() {
	cout << "Tours are booked." << endl;
}
Package1::Package1() {};
Package1::~Package1() {};
void Package1::bookHotels() {
	Vacation::bookHotels();
}
void Package1::bookFlights(){
	Vacation::bookFlights();
}
void Package1::bookTours() {
	cout << "Run:" << endl;
}
Package2::Package2() {};
Package2::~Package2() {};
void Package2::bookHotels() {
	Vacation::bookHotels();
}
void Package2::bookFlights() {

};
void Package2::bookTours() {
	Vacation::bookTours();
}
Package3::Package3() {};
Package3::~Package3() {};
void Package3::bookHotels() {
	Vacation::bookHotels();
}
void Package3::bookFlights() {
	Vacation::bookFlights();
}
void Package3::bookTours() {
	Vacation::bookTours();
}