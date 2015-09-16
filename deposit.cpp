
#include "deposit.h"
#include <string.h>
#include <exception>

using namespace std;

/* Default constructor */
Deposit::Deposit()
{
    this->amount = 0;
    this->period = 0;
    this->date = "";
    this->type = "";
    this->interestRate = 0.0;
}

/* Constructor with parameters */
void Deposit::Deposit(int amount, int period, string date, string type, double interestRate)
{
    /* BEGIN: Validation */

    try
    {
        // amount validation
        if (amount < 0)
            throw "Error: The AMOUNT can't be a negative value!\n";

        // period validation
        if (period < 0)
            throw "Error: The PERIOD can't be a negative value!\n";

        // interestRate validation
        if (interestRate < 0.0 || interestRate >= 100.0)
            throw "Error: The INTEREST RATE has invalid value! It can take values [0.0;100.0).\n";

    }
    catch (const string message)
    {
        cout << message << endl;
    }

    /* END: Validation */
}

#pragma region Amount
/* */
void Deposit::setAmount(int amount)
{

}

/* */
int Deposit::getAmount()
{
    return amount;
}
#pragma endregion


/* */
void Deposit::setPeriod(int period)
{

}

/* */
int Deposit::getPeriod()
{
    return period;
}


/* */
void Deposit::setDate(string date)
{

}

/* */
void Deposit::setType(string type)
{

}

/* */
void Deposit::setInterestRate(double interestRate)
{

}
