// Copyright (c) 2021 The PIVX developers
// Copyright (c) 2022 The Magnus developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef MAGNUS_POS_TEST_FIXTURE_H
#define MAGNUS_POS_TEST_FIXTURE_H

#include "test/test_magnus.h"

class CWallet;

/*
 * A text fixture with a preloaded 250-blocks regtest chain running running on PoS
 * and a wallet containing the key used for the coinbase outputs.
 */
struct TestPoSChainSetup: public TestChainSetup
{
    std::unique_ptr<CWallet> pwalletMain;

    TestPoSChainSetup();
    ~TestPoSChainSetup();
};

#endif // MAGNUS_POS_TEST_FIXTURE_H
