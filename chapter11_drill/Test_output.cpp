#include "std_lib_facilities.h"

int main(){
	int birth_year = 2001;
	cout << "Decimal: " << birth_year << "\nHexadecimal: " << hex << birth_year << "\nOctal: " << oct << birth_year << endl;
	cout << dec << 20 << endl;
	int a, b, c, d;
	cin >> a >>  oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
	cout << defaultfloat << 1234567.89 << '\t' << fixed << 1234567.89 << '\t' << scientific << 1234567.89 << '\t' << endl;
	cout << 
		"|" <<  setw(11)<< "Negrea" << "|" << setw(7) <<  "Adrián" << "|" << setw(11) << "06304566880" << "|" << setw(19) << "barackhu1@gamil.com" <<
		"\n|" << setw(11) << "Lakatos" << "|" << setw(7) <<  "Renátó" << "|" << setw(11) << "06304365886" << "|" << setw(19) << "ren2323@gamil.com" << 
		"\n|" << setw(11) << "Rézműves" << "|" << setw(7) <<  "Ádám" << "|" << setw(11) << "06104345686" << "|" << setw(19) << "adam5353@gamil.com" <<
		"\n|" << setw(11) << "Balogh" << "|" << setw(7) <<  "Máté" << "|" << setw(11) << "06339505886" << "|" << setw(19) << "mate233393@gamil.com" <<
		"\n|" << setw(11) << "Mészáros" << "|" << setw(7) <<  "Tamás" << "|" << setw(11) << "06300499986" << "|" << setw(19) << "tam2323@gamil.com" <<
		"\n|" << setw(11) << "Sárközi" << "|" << setw(7) << "Zsolt" << "|" << setw(11) << "06301115670" << "|" << setw(19) << "zsolt3323@gamil.com" << endl;
	return 0;
}