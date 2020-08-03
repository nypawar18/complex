/*
 * t1.h
 *
 *  Created on: 03-Aug-2020
 *      Author: nitin
 */

#ifndef T1_H_
#define T1_H_
class Complex{
	int i;
	int j;
public:
	void setdata(int x,int y){
		i=x;
		j=y;
	}

	void display(void){
		cout<<i<<"+"<<j<<"i"<<endl;
	}

	friend Complex retdata(Complex c,Complex d){
		Complex e;
		e.i=c.i+d.i;
		e.j=c.j+d.j;

		return e;
	}
};




#endif /* T1_H_ */
