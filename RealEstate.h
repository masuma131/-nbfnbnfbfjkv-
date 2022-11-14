#include "Apartment.h"
#include "Townhouses.h"
#include "SemiDetachedHouse.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


#define MAX_STR 255
#define MAX_NUM 5
#define INTEREST_RATE 0.05

struct Company {
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
};

void GetMonthylyEarningApt(struct Company* comp);
void GetReturnInvestmentApt(struct Company* comp);
void GetCurrentValueApt(struct Company* comp);
void GetCapitalGainsApt(struct Company* comp);

void GetMonthylyEarningTwnh(struct Company* comp);
void GetReturnInvestmentTwnh(struct Company* comp);
void GetCurrentValueTwnh(struct Company* comp);
void GetCapitalGainsTwnh(struct Company* comp);

void GetMonthylyEarningSemiDH(struct Company* comp);
void GetReturnInvestmentSemiDH(struct Company* comp);
void GetCurrentValueSemiDH(struct Company* comp);
void GetCapitalGainsSemiDH(struct Company* comp);
