/*********************************************************************
Teht‰v‰: HARJOITUS 17
Tekij‰: Pekka Melgin
PVM: 12.11.2013
Kuvaus:
Muokkaa edellist‰ ohjelmaa siten, ett‰ edell‰ m‰‰ritelty‰ tietuetyyppi‰
k‰ytet‰‰n my‰s kahden muun "koululaisen" tietojen tallentamiseen.
N‰iden kahden muun koululaisen tiedot alustetaan ao. muuttujien
m‰‰rittelyn yhteydess‰. Ainoastaan yhden koululaisen tiedot kysyt‰‰n
k‰ytt‰j‰lt‰ edellisen teht‰v‰n tapaan.

Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa
suuruusj‰rjestyksess‰ (pienimm‰st‰ suurimpaan) n‰yt‰lle
*********************************************************************/
#include <iostream> 

using namespace std; 
struct henktiedot 
{ 
 char etunimi[10];
 char sukunimi[15];
 int koulumatka;
 char osoite[20];
 int postinumero;
 int kengannumero;
}; 
int main() 
{ 
	henktiedot henktiedot[3] = {
		{"Testi", "Testaaja", 123, "Testaajankatu 123", 12345, 45},
		{"Mesti", "Mestaaja", 456, "Mestaajankatu 321", 54321, 55},
		{"Mesti", "Mestaaja", 456, "Mestaajankatu 321", 54321, 55}
	};
	cout << "Anna etunimi :";
	cin >> henktiedot[2].etunimi;
	cout << "Anna keng‰nnumero :";
	cin >> henktiedot[2].kengannumero;
	cout << "Anna sukunimi :";
	cin >> henktiedot[2].sukunimi;
	cout << "Anna koulumatkan pituus :";
	cin >> henktiedot[2].koulumatka;
	cout << "Anna osoitteesi :";
	cin.get();
	cin.get(henktiedot[2].osoite,20);
	cout << "Anna postinumerosi :";
	cin >> henktiedot[2].postinumero;
	for (int ind = 0; ind < 3; ind++) {
		cout << henktiedot[ind].etunimi << " "
			<< henktiedot[ind].sukunimi << endl
			<< henktiedot[ind].osoite << endl
			<< henktiedot[ind].postinumero << endl
			<< henktiedot[ind].kengannumero << endl
			<< henktiedot[ind].koulumatka << endl;
	}



	for (int i = 0; i < 3; i++) {
                for (int j = i+1; j < 3; j++) {
                        if (henktiedot[i].koulumatka > henktiedot[j].koulumatka) {
                                /*int apu = lkm[j].ika;
                                lkm[j].ika = lkm[i].ika;
                                lkm[i].ika = apu;*/
								cout << "jee";

                        }
                }
        }




}