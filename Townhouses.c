#include "RealEstate.h"

void GetMonthylyEarningTwnh(struct Company* comp) {

	comp->totalmonthlyEarningsTwh = 0;

	for (int i = 0; i < MAX_NUM; ++i) {

		comp->townHouses[i].monthlyEarnings = (comp->townHouses[i].monthlyRent) - (comp->townHouses[i].monthlyUtilities) -
			(comp->townHouses[i].monthlyCondofees) - (comp->townHouses[i].monthlyPropertyTax);

		comp->totalmonthlyEarningsTwh += comp->townHouses[i].monthlyEarnings;
	}
}


void GetReturnInvestmentTwnh(struct Company* comp) {
	
	for (int i = 0; i < MAX_NUM; ++i) {

		comp->townHouses[i].annualReturnInvestment = 100 * 12 * (comp->townHouses[i].monthlyEarnings) /
			(comp->townHouses[i].purchasePrice);
	}
	
}

void GetCurrentValueTwnh(struct Company* comp)

{
	for (int i = 0; i < MAX_NUM; ++i) {

		comp->townHouses[i].currentValue = 12 * (comp->townHouses[i].monthlyEarnings) / INTEREST_RATE;

	}

}

void GetCapitalGainsTwnh(struct Company* comp) {


	for (int i = 0; i < MAX_NUM; ++i) {

		comp->townHouses[i].capitalGains = 12 * (comp->townHouses[i].currentValue) - (comp->townHouses[i].purchasePrice);
	}
}