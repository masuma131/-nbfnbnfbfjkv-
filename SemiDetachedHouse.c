#include "RealEstate.h"

void GetMonthylyEarningSemiDH(struct Company* comp) {

	comp->totalmonthlyEarningsSemiDH = 0;
	for (int i = 0; i < MAX_NUM; ++i) {

		comp->semiDetachedHouses[i].monthlyEarnings = (comp->semiDetachedHouses[i].monthlyRent) - (comp->townHouses[i].monthlyUtilities) -
														 - (comp->townHouses[i].monthlyPropertyTax);
		comp->totalmonthlyEarningsSemiDH += comp->semiDetachedHouses[i].monthlyEarnings;
	
	//monthly earnings = monthly rent - monthly utilities - monthly property tax.
	}

}

void GetReturnInvestmentSemiDH(struct Company* comp) {

		for (int i = 0; i < MAX_NUM; ++i) {

			comp->semiDetachedHouses[i].annualReturnInvestment = 100 * 12 * (comp->apartments[i].monthlyEarnings) /
				(comp->semiDetachedHouses[i].purchasePrice);
			//return on investment (percent) = 100 x 12 x monthly earnings / purchase price.
		}
	}

void GetCurrentValueSemiDH(struct Company* comp) {

	for (int i = 0; i < MAX_NUM; ++i) {

		comp->semiDetachedHouses[i].currentValue = 12 * (comp->semiDetachedHouses[i].monthlyEarnings) / INTEREST_RATE;

	}
	//current value = 12 x monthly earnings / interest rate.The interest rate is hard - coded to 5 % (or 0.05).
}

void GetCapitalGainsSemiDH(struct Company* comp) {
	
	for (int i = 0; i < MAX_NUM; ++i) {

		comp->semiDetachedHouses[i].capitalGains = (comp->semiDetachedHouses[i].currentValue) - (comp->semiDetachedHouses[i].purchasePrice);
		//capital gains = current value - purchase price.
	}
}