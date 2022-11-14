#include "RealEstate.h"


void GetMonthylyEarningApt(struct Company* comp) {

	comp->totalmonthlyEarningsApt = 0;
	for (int i = 0; i < MAX_NUM; ++i) {

		comp->apartments[i].monthlyEarnings = (comp->apartments[i].monthlyRent) - (comp->apartments[i].monthlyCondofees);
		comp->totalmonthlyEarningsApt += comp->apartments[i].monthlyEarnings;
	}
	;
};

void GetReturnInvestmentApt(struct Company* comp) {

	comp->averageReturnInvestmentApt = 0;

	for (int i = 0; i < MAX_NUM; ++i) {

		comp->apartments[i].annualReturnInvestment = 100 * 12 * (comp->apartments[i].monthlyEarnings)/
			(comp->apartments[i].purchasePrice);
		comp->averageReturnInvestmentApt += comp->apartments[i].annualReturnInvestment / MAX_NUM;
	}
	
}


void GetCurrentValueApt(struct Company* comp) {

	comp->totalCurrentValueApt = 0;
	for (int i = 0; i < MAX_NUM; ++i) {

		comp->apartments[i].currentValue = 12 * (comp->apartments[i].monthlyEarnings) / INTEREST_RATE;

		comp->totalCurrentValueApt += comp->apartments[i].currentValue;
	}
}

void GetCapitalGainsApt(struct Company* comp) {

	comp->totalCapitalGains = 0;

	for (int i = 0; i < MAX_NUM; ++i) {

		comp->apartments[i].capitalGains = 12 * (comp->apartments[i].currentValue) - (comp->apartments[i].purchasePrice);

		comp->totalCapitalGains += comp->apartments[i].capitalGains;
	}

}

