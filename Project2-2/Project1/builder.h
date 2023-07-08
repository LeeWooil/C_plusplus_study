#pragma once
#ifndef builder_h
#define builder_h

#include <string>
#include <iostream>
#include <cassert>
using namespace std;

class Vacation {
	
public:
	Vacation();
	~Vacation();
	virtual void bookHotels() = 0;
	virtual void bookFlights() = 0;
	virtual void bookTours() = 0;

};

class Package1 : public Vacation {
public:
	Package1();
	~Package1();
	void bookHotels() override;
	void bookFlights() override;
	void bookTours() override;
};

class Package2 : public Vacation {
public:
	Package2();
	~Package2();
	void bookHotels() override;
	void bookFlights() override;
	void bookTours() override;
};

class Package3 : public Vacation {
public:
	Package3();
	~Package3();
	void bookHotels() override;
	void bookFlights() override;
	void bookTours() override;
};
#endif // !builder_h

