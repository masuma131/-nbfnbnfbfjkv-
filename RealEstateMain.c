//RealEstateMain.c - main program for real estate companies

/*For the apartment, there is a structure of related variable sand there are functions which operateon these variables.
Write the class declaration for an apartment based on the apartment structure and functions which operate on the apartment structure.

#include <stdbool.h>
#define MAX_STR 255


class Apartments {
	public:
	char address[MAX_STR];
	int numRooms;
	int numBathrooms;
	double purchasePrice;
	double monthlyRent;
	double monthlyCondofees;
	double monthlyEarnings;
	double annualReturnInvestment;
	double currentValue;
	double capitalGains;

	void GetMonthylyEarningApt();
	void GetReturnInvestmentApt();
	void GetCurrentValueApt);
	void GetCapitalGainsApt();
};

For the townhouse, there is a structure of related variables and there are functions which operate on these variables.
Write the class declaration for a townhouse based on the townhouse structure and functions which operate on the townhouse structure.

#include <stdbool.h>
#define MAX_STR 255

class Townhouses {
	prublic:
	char address[MAX_STR];
	int numRooms;
	int numBathrooms;
	double purchasePrice;
	double monthlyRent;
	double monthlyUtilities;
	double monthlyCondofees;
	double monthlyPropertyTax;
	double monthlyEarnings;
	double annualReturnInvestment;
	double currentValue;
	double capitalGains;

	void GetMonthylyEarningTwnh();
	void GetReturnInvestmentTwnh();
	void GetCurrentValueTwnh();
	void GetCapitalGainsTwnh();

};

For the semi - detached house, there is a structure of related variablesand there are functions which operate on these variables.
Write the class declaration for a semi - detached house based on the semi - detached house structure and functions which operate on the semi - detached house structure.

#include <stdbool.h>
#define MAX_STR 255

class SemiDetachedHouses {
	public:
	char address[MAX_STR];
	int numRooms;
	int numBathrooms;
	double purchasePrice;
	double monthlyRent;
	double monthlyUtilities;
	double monthlyPropertyTax;
	double monthlyEarnings;
	double annualReturnInvestment;
	double currentValue;
	double capitalGains;

	void GetMonthylyEarningSemiDH();
	void GetReturnInvestmentSemiDH();
	void GetCurrentValueSemiDH();
	void GetCapitalGainsSemiDH();
};

For the real - estate company, there is a structure of related variables and there are functions which operate on these variables.
Write the class declaration for the real - estate company based on the real - estate company structure and functions which operate
on the real - estate company structure.
#include <stdbool.h>
#define MAX_STR 255
#define MAX_NUM 5

class Company {
	public:
	char name[MAX_STR];
	char address[MAX_STR];
	struct Apartments apartments[MAX_NUM];
	struct Townhouses townHouses[MAX_NUM];
	struct SemiDetachedHouses semiDetachedHouses[MAX_NUM];
 
	void GetMonthlyEarnings()
	void ReturnOnInvestment()
	void EstimatedCurrentValue()
	void CapitalGains()
}
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include  <stdlib.h>
#include <string.h>
#include "RealEstate.h"


int main(void) {

	//Read the data for all companies from a file
	struct Company company = {0};
	//Retrieve data for apartments
	FILE* fp = fopen("Apartment.txt", "r");


	for (int i = 0; i < MAX_NUM; ++i) {
		fscanf_s(fp, "%[^\n]s", company.apartments[i].address, MAX_STR);
		fscanf_s(fp, "%d", &company.apartments[i].numRooms);
		fscanf_s(fp, "%d", &company.apartments[i].numBathrooms);
		fscanf_s(fp, "%lf", &company.apartments[i].purchasePrice);
		fscanf_s(fp, "%lf", &company.apartments[i].monthlyRent);
		fscanf_s(fp, "%lf", &company.apartments[i].monthlyCondofees);
		while (fgetc(fp) != '\n') {
			;
		};//clear the file buffer before the next fscanf()
	}

	fclose(fp);

	//Retrieve data for townhouses
	fp = fopen("Townhouses.txt", "r");
	for (int i = 0; i < 5; ++i) {
		fscanf_s(fp, "%[^\n]s", company.townHouses[i].address, MAX_STR);
		fscanf_s(fp, "%d", &company.townHouses[i].numRooms);
		fscanf_s(fp, "%d", &company.townHouses[i].numBathrooms);
		fscanf_s(fp, "%lf", &company.townHouses[i].purchasePrice);
		fscanf_s(fp, "%lf", &company.townHouses[i].monthlyRent);
		fscanf_s(fp, "%lf", &company.townHouses[i].monthlyUtilities);
		fscanf_s(fp, "%lf", &company.townHouses[i].monthlyCondofees);
		fscanf_s(fp, "%lf", &company.townHouses[i].monthlyPropertyTax);
		while (fgetc(fp) != '\n');//clear the file buffer before the next fscanf()
	}

	fclose(fp);

			//Retrieve data for semi-detached houses
			fp = fopen("SemiDetachedHouses.txt", "r");

			for (int i = 0; i < MAX_NUM; ++i) {
				fscanf_s(fp, "%[^\n]s", company.semiDetachedHouses[i].address, MAX_STR);
				fscanf_s(fp, "%d", &company.semiDetachedHouses[i].numRooms);
				fscanf_s(fp, "%d", &company.semiDetachedHouses[i].numBathrooms);
				fscanf_s(fp, "%lf", &company.semiDetachedHouses[i].purchasePrice);
				fscanf_s(fp, "%lf", &company.semiDetachedHouses[i].monthlyRent);
				fscanf_s(fp, "%lf", &company.semiDetachedHouses[i].monthlyUtilities);
				fscanf_s(fp, "%lf", &company.semiDetachedHouses[i].monthlyPropertyTax);
				while (fgetc(fp) != '\n');//clear the file buffer before the next fscanf()
			} 
		
	     fclose(fp);

		 /*struct Company {
			 char name[MAX_STR];
			 char address[MAX_STR];
			 struct Apartments apartments[MAX_NUM];
			 struct Townhouses townHouses[MAX_NUM];
			 struct SemiDetachedHouses semiDetachedHouses[MAX_NUM];

			 double totalmonthlyEarningsApt;
			 double totalmonthlyEarningsTwh;
			 double totalmonthlyEarningsSemiDH;

			 double averageReturnInvestmentApt;

			 double totalCurrentValueApt;

			 double totalCapitalGains;
		 };company*/

		 GetMonthylyEarningApt(&company);

		 printf("%f", company.totalmonthlyEarningsApt);


	return 0;
}