/*
 * t1.cpp
 *
 *  Created on: 03-Aug-2020
 *      Author: nitin
 */
#include<iostream>
using namespace std;
#include"t1.h"


int main(void)
{
	Complex c,d,e;
	c.setdata(5,6);
	c.display();
	d.setdata(8,3);
	d.display();
	e=retdata(c,d);
	e.display();
	return 0;
}



