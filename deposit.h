
#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <string>

/* Deposit class declaration */
class Deposit
{
    int amount,             // Amount of deposite money
        period;             // Period of deposit
    std::string date,       // Date deposit was opened
        type;               // Type of deposit
    double interestRate;    // Interest rate of deposit

public:
    /* Default class constructor declaration */
    Deposit();

    /* Constructor with parameters */
    Deposit(int amount, int period, std::string date,
            std::string type, double interestRate);

    /* Default class destructor */
    ~Deposit(){}

    /* Set accessors */
    void setAmount(int amount);                // amount setter declaration
    void setPeriod(int period);                // period setter declaration
    void setDate(std::string date);            // date setter declaration
    void setType(std::string type);            // type setter declaration
    void setInterestRate(double interestRate); // interestRate setter declaration

    /* Get accessors */
    int getAmount();            // amount getter declaration
    int getPeriod();            // period getter declaration
    std::string getDate();      // date getter declaration
    std::string getType();      // type getter declaration
    double getInterestRate();   // interestRate getter declaration
};

#endif // DEPOSIT_H
