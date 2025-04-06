#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int Pennies_to_Nickels() {
string NickelsNewLine = "";
string HowManyPennies = "";

int Pennies = 0;
int Nickels = 0;
int PenniesPerNickel = 0;
int _1 = 0;
int _0 = 0;
int _2 = 0;
int PennyNickelSum = 0;
int Exit_Stuff = 0;

PenniesPerNickel = 5;
_1 = 1;
_2 = 2;

NickelsNewLine = "Nickels.\n";
HowManyPennies = "How Many Pennies Do You Have?\n";

cout << HowManyPennies;
cin >> Pennies;

while (Pennies > Nickels) {
Pennies = Pennies - PenniesPerNickel;
Nickels = Nickels + _1; }

if (Pennies < _0) {
Pennies = Pennies + PenniesPerNickel;
Nickels = Nickels - _1; }

PennyNickelSum = (Pennies) + (Nickels);

if (Pennies == _1) {
cout << Nickels << " Nickels and " << Pennies << " Penny." << endl;
} else if (Nickels == _1) {
cout << Nickels << " Nickel and " << Pennies << " Pennies" << endl;
} else {
cout << Nickels << " Nickels and " << Pennies << " Pennies." << endl;
}

if (PennyNickelSum == _2) {
cout << Nickels << " Nickel and " << Pennies << " Penny." << endl;
} 

cin >> Exit_Stuff;
return 0;
}

int Pennies_to_Dimes() {
int Pennies = 0;
int Dimes = 0;
int PenniesPerDime = 0;

PenniesPerDime = 10;

cout << "How Many Pennies Do You Have?" << endl;
cin >> Pennies;

while (Pennies > Dimes) {
Pennies = (Pennies) - (PenniesPerDime);
Dimes = Dimes + 1;
}


return 0;
}

int Nickels_to_Dimes() {
int Nickels = 0;
int Dimes = 0;



cout << "How Many Nickels Do You Have?" << endl;
cin >> Nickels;


return 0;
}



int Selection_Menu() {

int i = 0;

string WhatConversion = "";
string UserSelection = "";
string PenniesToNickels = "";
string PenniesToDimes = "";
string PenniesToQuarters = "";
string NickelsToDimes = "";

string PenniesToNickelsWithPeriods = "";
string PenniesToDimesWithPeriods = "";
string PenniesToQuartersWithPeriods = "";
string NickelsToDimesWithPeriods = "";



PenniesToNickelsWithPeriods = "pennies.and.nickels";
PenniesToDimesWithPeriods = "pennies.and.dimes";
PenniesToNickels = "Pennies And Nickels";

PenniesToDimes = "Pennies And Dimes";

WhatConversion = "What US Coins Do You Want To Convert Between?";

cout << "Please Substitute Spaces for Periods." << endl;
cout << WhatConversion << endl;
cin >> UserSelection;



if (UserSelection == PenniesToNickelsWithPeriods) {
UserSelection = PenniesToNickels;
} else if (UserSelection == PenniesToDimesWithPeriods) {
UserSelection = PenniesToDimes; }

if (UserSelection == PenniesToNickels) {
Pennies_to_Nickels(); }

if (UserSelection == PenniesToDimes) {
Pennies_to_Dimes(); }



return 0;
}

int main() {
Selection_Menu();













return 0;
}
