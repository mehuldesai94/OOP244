// Final Project Milestone 3 - iProduct Interface
// Version 3.3
// Allocator.cpp
// 2018-03-10
// Authors	Fardad Soleimanloo, Chris Szalwinski
//
// For you final test before submission:
//      DO NOT MODIFY THIS FILE IN ANY WAY
//
// Revision History
// -----------------------------------------------------------
// Name: Mehulkumar Desai     Date: 09/04/2018       Reason: NA
/////////////////////////////////////////////////////////////////

/*
Name: Mehulkumar Desai
Student number: 110288172
Email: mmdesai@myseneca.ca
*/

#include "MyProduct.h"

namespace AMA {

	iProduct* CreateProduct() {
		return new MyProduct("Product");
	}
	iProduct* CreatePerishable() {
		return new MyProduct("Perishable");
	}
}