#include <stdexcept>
#define BOOST_TEST_DYN_LINK
#ifdef STAND_ALONE
#define BOOST_TEST_MODULE Main
#endif

#include "../include/taxcalculate.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(ParserTest)

    BOOST_AUTO_TEST_CASE(TestTaxCalc)
    {
        BOOST_CHECK_EQUAL(calculateTax(10000), 2000);
    }
    BOOST_AUTO_TEST_CASE(TestMedBracket)
    {
        BOOST_CHECK_EQUAL(calculateTax(60000), 16500);
    }
    BOOST_AUTO_TEST_CASE(TestHighBracket)
    {
        BOOST_CHECK_EQUAL(calculateTax(200000), 75000);
    }
    BOOST_AUTO_TEST_CASE(TestNegIncomeError)
    {
        BOOST_CHECK_THROW(calculateTax(-1), std::invalid_argument);
    }

BOOST_AUTO_TEST_SUITE_END()

