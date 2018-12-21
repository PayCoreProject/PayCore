// Copyright (c) 2014 The Bitcoin Core developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers 
// Copyright (c) 2018 The Paycore developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "primitives/transaction.h"
#include "main.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(main_tests)

BOOST_AUTO_TEST_CASE(subsidy_limit_test)
{
    //Basic rewards
    BOOST_CHECK(GetBlockValue(500) == 999 * COIN);
    BOOST_CHECK(GetBlockValue(21904) == 5 * COIN);

    //Halvings
    int nHeight = 720 /*1d*/ * 365 * 2; //2y
    BOOST_CHECK(GetBlockValue(nHeight) == 5/2 * COIN);

    //Halvings
    nHeight = 720 /*1d*/ * 365 * 4; //4y
    BOOST_CHECK(GetBlockValue(nHeight) == 5/4 * COIN);
}

BOOST_AUTO_TEST_SUITE_END()
