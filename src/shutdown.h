// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Core developers
// Copyright (c) 2021 The PIVX developers
// Copyright (c) 2022 The Magnus developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MAGNUS_SHUTDOWN_H
#define MAGNUS_SHUTDOWN_H

void StartShutdown();
void AbortShutdown();
bool ShutdownRequested();

#endif // MAGNUS_SHUTDOWN_H
