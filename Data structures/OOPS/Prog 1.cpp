/*
Complex Number Class
A ComplexNumber class contains two data members : one is real part (R) and other is imaginary (I) (both integer).
Implement the Complex numbers class that contains following functions -
1. constructor
You need to create the appropriate constructor.
2. plus -
This function adds two given complex numbers and updates the first complex number.
e.g.
if C1 = 4 + i5 and C2 = 3 +i1
C1.plus(C2) results in: 
C1 = 7 + i6 and C2 = 3 + i1
3. multiply -
This function multiplies two given complex numbers and updates the first complex number.
e.g.
C1 = 4 + i5 and C2 = 1 + i2
C1.multiply(C2) results in: 
C1 = -6 + i13 and C2 = 1 + i2
4. print -
This function prints the given complex number in the following format :
a + ib
Note : There is space before and after '+' (plus sign) and no space between 'i' (iota symbol) and b.
Input Format :
Line 1 : Two integers - real and imaginary part of 1st complex number
Line 2 : Two integers - real and imaginary part of 2nd complex number
Line 3 : An integer representing choice (1 or 2) (1 represents plus function will be called and 2 represents multiply function will be called)
Sample Input 1 :
4 5
6 7
1
Sample Output 1 : 10 + i12
Sample Input 2 :
4 5
6 7
2
Sample Output 2 : -11 + i58
*/

#include <iostream>
using namespace std;
class Complex{

private:
 double real,imag;
public:
 Complex(){
  real=imag=0;
 }
 Complex(double r){
  real=r;
  imag=0;
 }
 Complex(double r, double i){
  real=r;
  imag=i;
 }
 Complex(Complex &obj){
  real=obj.real;
  imag=obj.imag;
 }
 Complex add(Complex c){
        Complex Add;
  Add.real = real + c.real;
  Add.imag = imag + c.imag;
        return Add;
 }
 Complex sub(Complex c){
  Complex Sub;
  Sub.real = real - c.real;
  Sub.imag = imag - c.imag;
  return Sub;
 }
 Complex mult(Complex c){
        Complex Mult;
  Mult.real = real*c.real - imag*c.imag;
  Mult.imag = real*c.imag - c.real*imag;
  return Mult;
 }
 Complex div(Complex c){
  Complex Div;
  Div.real = (real*c.real + imag*c.imag)/(c.real*c.real + c.imag*c.imag);
  Div.imag = (imag*c.real + real*c.imag)/(c.real*c.real + c.imag*c.imag);
  return Div;
 }
 void print(){
        cout<<real<<"+"<<imag<<"i"<<endl<<endl;
 }
 double getReal() const{
  return real;
 }
 double getImag() const{
  return imag;
 }
 void setReal(double re){
  real = re;

 }
 void setImag(double im){
        imag = im;
 }
};
int main()
{
 double real1,imag1,real2,imag2;
 cin>>real1;
 cin>>imag1;
 Complex obj1(real1,imag1);
 obj1.print();
 cin>>real2;
 cin>>imag2;
 Complex obj2(real2,imag2);
 obj2.print();
 Complex c;
 c = obj1.add(obj2);
 cout<<"Addition is : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;
 c= obj1.sub(obj2);
 cout<<endl<<"Subtraction is : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;
 c= obj1.mult(obj2);
 cout<<endl<<"Multiplication is : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;
 c= obj1.div(obj2);
 cout<<endl<<"Division result  is : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;
 return 0;
}
