#include <iostream>
using namespace std;

class Mass {
   public:
      Mass(int kilograms = 0, int grams = 0); //default initialization
      void Print() const;
      Mass operator-(Mass rhs); //operator function to subtract two totalMass objects together
      Mass operator-(int rhs); //operator function to subtract the new kg to totalMass.kg
   private:
      int kg;
      int g;
};

Mass::Mass(int kilograms, int grams) {
   kg = kilograms;
   g = grams;
}

// No need to accommodate for overflow or negative values

Mass Mass::operator-(Mass rhs){
   Mass totalMass;
   
   totalMass.kg = kg - rhs.kg;
   totalMass.g = g - rhs.g;
   
   return totalMass;
}

Mass Mass::operator-(int kg){
   Mass totalMass;
   totalMass.kg = this->kg - kg;
   totalMass.g = g;
   
   return totalMass;
}
void Mass::Print() const {
   cout << kg << " kilograms, " << g << " grams";
}

int main() {
   int kilograms1;
	int grams1;
	int kilograms2;
	int grams2;
   
    cin >> kilograms1;
	cin >> grams1;
	cin >> kilograms2;
	cin >> grams2;
   
    Mass mass1(kilograms1, grams1);
    Mass mass2(kilograms2, grams2);
   
    Mass difference1 = mass1 - mass2; //uses the first operator overload function to subtract two of the objects
    Mass difference2 = mass1 - kilograms2; //adds the mass t
   
    mass1.Print();
	cout << endl;
	mass2.Print();
	cout << endl;
	cout << "Difference: ";
	difference1.Print();
	cout << endl;
   
    cout << endl;
   
    mass1.Print();
	cout << endl;
	cout << kilograms2 << " kilograms" << endl;
	cout << "Difference: ";
	difference2.Print();
	cout << endl;
   
   return 0;
}