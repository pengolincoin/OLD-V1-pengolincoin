// Copyright (c) 2020, The COVID-19 Developers
// Copyright (c) 2020, The PengolinCoin Developers

#pragma once

#include <config/CryptoNoteConfig.h>

/* Make sure everything in here is const - or it won't compile! */
namespace WalletConfig
{
    /* The prefix your coins address starts with */
    const std::string_view addressPrefix = "PNGLNN";

    /* Your coins 'Ticker', e.g. Monero = XMR, Bitcoin = BTC */
    const std::string ticker = "PGO";

    /* The filename to output the CSV to in save_csv */
    const std::string csvFilename = "transactions.csv";

    /* The filename to read+write the address book to - consider starting with
       a leading '.' to make it hidden under mac+linux */
    const std::string addressBookFilename = ".addressBook.json";

    /* The name of your deamon */
    const std::string daemonName = "PengolinCoind";

    /* The name to call this wallet */
    const std::string walletName = "pengolin-wallet";

    /* The name of service/walletd, the programmatic rpc interface to a
       wallet */
    const std::string walletdName = "pengolin-service";

    /* The full name of your crypto */
    const std::string coinName = std::string(CryptoNote::CRYPTONOTE_NAME);

    /* Where can your users contact you for support? E.g. discord */
    const std::string contactLink = "https://www.pengolincoin.xyz";

    /* The number of decimals your coin has */
    const uint8_t numDecimalPlaces = CryptoNote::parameters
                                               ::CRYPTONOTE_DISPLAY_DECIMAL_POINT;

    /* The length of a standard address for your coin */
    const uint16_t standardAddressLength = 101;

    /* The length of an integrated address for your coin - It's the same as
       a normal address, but there is a paymentID included in there - since
       payment ID's are 64 chars, and base58 encoding is done by encoding
       chunks of 8 chars at once into blocks of 11 chars, we can calculate
       this automatically */
    const uint16_t integratedAddressLength = standardAddressLength
                                           + ((64 * 11) / 8);

    /* The default fee value to use with transactions (in ATOMIC units!) */
    const uint64_t defaultFee = CryptoNote::parameters::MINIMUM_FEE; 

    /* The minimum fee value to allow with transactions (in ATOMIC units!) */
    const uint64_t minimumFee = CryptoNote::parameters::MINIMUM_FEE;

    /* The minimum amount allowed to be sent - usually 1 (in ATOMIC units!) */
    const uint64_t minimumSend = 1000;

    /* Is a mixin of zero disabled on your network? */
    const bool mixinZeroDisabled = false;

    /* If a mixin of zero is disabled, at what height was it disabled? E.g.
       fork height, or 0, if never allowed. This is ignored if a mixin of
       zero is allowed */
    const uint64_t mixinZeroDisabledHeight = 0;

    /* Should we process coinbase transactions? We can skip them to speed up
       syncing, as most people don't have solo mined transactions */
    const bool processCoinbaseTransactions = true;
}


// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2018-2019, The DeroGold Assosiation
// Copyright (c) 2018-2019, The BitcoinMono Developers
// Copyright (c) 2020, The COVID-19 Developers
// Copyright (c) 2020, The PengolinCoin Developers
// Please see the included LICENSE file for more information

