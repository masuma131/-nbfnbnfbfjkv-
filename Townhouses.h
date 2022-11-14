#define MAX_STR 255

struct Townhouses {
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
};
