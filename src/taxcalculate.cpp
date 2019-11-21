#include "../include/taxcalculate.h"
#include <stdexcept>

int calculateTax(int income)
{
    int tax = 0;
    
    if (income < 0)
        throw std::invalid_argument("Income must be positive");
    
    if (income <= 37500)
        tax = income * 0.2;
    else if (income <= 150000)
    {
        tax += 37500 * 0.2 + (income - 37500) * 0.4;
    }
    else
        tax += 37500 * 0.2 + 112500 * 0.4 + (income - 150000) * 0.45;
    return tax;
}

