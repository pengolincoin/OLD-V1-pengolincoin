// CryptoNote LICENSE 

// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2018-2019, The DeroGold Assosiation
// Copyright (c) 2018-2019, The BitcoinMono Developers
// Copyright (c) 2020, The COVID-19 Developers
// Copyright (c) 2020, The PengolinCoin Developers
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include <limits>
#include <initializer_list>
#include <boost/uuid/uuid.hpp>

namespace CryptoNote {
namespace parameters {

const uint64_t DIFFICULTY_TARGET                             = 60; // seconds
const uint64_t DIFFICULTY_TARGET_V2                          = DIFFICULTY_TARGET; 

/* Height to swap to DIFFICULTY_TARGET_V2 */
const uint64_t DIFFICULTY_TARGET_V2_HEIGHT                   = 0;

const uint32_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 0x30c6a1c05; // PNGLNN wallet prefix
const uint32_t CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW          = 20;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = 6 * DIFFICULTY_TARGET;

const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 11;

// MONEY_SUPPLY - total number coins to be generated
const uint64_t MONEY_SUPPLY                                  = UINT64_C(10000000000000000); // 100 Millions

const uint32_t EMISSION_SPEED_FACTOR                         = 20;  
const uint32_t EMISSION_SPEED_FACTOR_V2                      = EMISSION_SPEED_FACTOR; 

static_assert(EMISSION_SPEED_FACTOR    <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");
static_assert(EMISSION_SPEED_FACTOR_V2 <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

/* Height to swap to EMISSION_SPEED_FACTOR_V2 */
const uint64_t EMISSION_SPEED_FACTOR_V2_HEIGHT               = 0;

const uint64_t GENESIS_BLOCK_REWARD                          = UINT64_C(0);

const char GENESIS_COINBASE_TX_HEX[]                         = "011401ff00010002a4686dc9345c4547c5cddf69ee38dc83998b10d492248ecb468b8fe2afbfbab82101e401a33148d2032a1040afc145c5f6b6ffedaa21d1ca487a32715abc9ee7a104";

static_assert(sizeof(GENESIS_COINBASE_TX_HEX)/sizeof(*GENESIS_COINBASE_TX_HEX) != 1, "GENESIS_COINBASE_TX_HEX must not be empty.");

const uint64_t GENESIS_BLOCK_TIMESTAMP                       = 1584874186;

const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 100000; 
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 20000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 10000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;

const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 8;

const uint64_t MINIMUM_FEE                                   = UINT64_C(10000); 

//This section defines our minimum and maximum mixin counts required for transactions 
const uint64_t MINIMUM_MIXIN_V0                              = 0;
const uint64_t MAXIMUM_MIXIN_V0                              = 3;

//The mixin to use by default with zedwallet and turtle-service 
const uint64_t DEFAULT_MIXIN_V0                              = 1;

const uint64_t DEFAULT_DUST_THRESHOLD                        = UINT64_C(10);

const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;

const uint64_t DIFFICULTY_WINDOW                             = 60;
const uint64_t DIFFICULTY_BLOCKS_COUNT                       = DIFFICULTY_WINDOW + 1;

const size_t   MAX_BLOCK_SIZE_INITIAL                        = 100000;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;
const uint64_t MAX_EXTRA_SIZE                                = 140000;
const uint64_t MAX_EXTRA_SIZE_V2                             = 1024;
const uint64_t MAX_EXTRA_SIZE_V2_HEIGHT                      = 0;

/* For new projects forked from this code base, this value should be
   changed to 0 to prevent a possible transaction bloat exploit */
const uint64_t TRANSACTION_SIGNATURE_COUNT_VALIDATION_HEIGHT = 0;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;     //seconds, one day
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7; //seconds, one week
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;

const uint32_t UPGRADE_HEIGHT_V2                             = 1;
const uint32_t UPGRADE_HEIGHT_V3                             = 2;
const uint32_t UPGRADE_HEIGHT_V4                             = 3; // Upgrade height for CN-Lite Variant 1 switch.
const uint32_t UPGRADE_HEIGHT_V5                             = 4; // Upgrade height for CN-Turtle Variant 2 switch.
const uint32_t UPGRADE_HEIGHT_CURRENT                        = UPGRADE_HEIGHT_V5;

const unsigned UPGRADE_VOTING_THRESHOLD                      = 90;               // percent
const uint32_t UPGRADE_VOTING_WINDOW                         = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const uint32_t UPGRADE_WINDOW                                = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");

/* Block heights we are going to have hard forks at */
const uint64_t FORK_HEIGHTS[] =
{
    100000, // fork
};

/* MAKE SURE TO UPDATE THIS VALUE WITH EVERY MAJOR RELEASE BEFORE A FORK */
const uint64_t SOFTWARE_SUPPORTED_FORK_INDEX                 = 0;

const uint64_t FORK_HEIGHTS_SIZE = sizeof(FORK_HEIGHTS) / sizeof(*FORK_HEIGHTS);

const uint8_t CURRENT_FORK_INDEX = FORK_HEIGHTS_SIZE == 0 ? 0 : SOFTWARE_SUPPORTED_FORK_INDEX;

static_assert(CURRENT_FORK_INDEX >= 0, "CURRENT FORK INDEX must be >= 0");
/* Make sure CURRENT_FORK_INDEX is a valid index, unless FORK_HEIGHTS is empty */
static_assert(FORK_HEIGHTS_SIZE == 0 || CURRENT_FORK_INDEX < FORK_HEIGHTS_SIZE, "CURRENT_FORK_INDEX out of range of FORK_HEIGHTS!");

const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.bin";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.bin";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.bin";
const char     MINER_CONFIG_FILE_NAME[]                      = "miner_conf.json";
} // parameters

const char     CRYPTONOTE_NAME[]                             = "PengolinCoin";
const uint8_t  TRANSACTION_VERSION_1                         =  1;
const uint8_t  TRANSACTION_VERSION_2                         =  2;
const uint8_t  CURRENT_TRANSACTION_VERSION                   =  TRANSACTION_VERSION_1;

const uint8_t  BLOCK_MAJOR_VERSION_1                         =  1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         =  2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         =  3;
const uint8_t  BLOCK_MAJOR_VERSION_4                         =  4;
const uint8_t  BLOCK_MAJOR_VERSION_5                         =  5;
const uint8_t  BLOCK_MAJOR_VERSION_6                         =  6;
const uint8_t  BLOCK_MAJOR_VERSION_7                         =  7;
const uint8_t  BLOCK_MAJOR_VERSION_8                         =  8;
const uint8_t  BLOCK_MAJOR_VERSION_9                         =  9;
const uint8_t  BLOCK_MAJOR_VERSION_CURRENT                   =  BLOCK_MAJOR_VERSION_5; // current blockchain version

const uint8_t  BLOCK_MINOR_VERSION_0                         =  0;
const uint8_t  BLOCK_MINOR_VERSION_1                         =  1;

const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        =  10000;  //by default, blocks ids count in synchronizing
const uint64_t BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            =  100;    //by default, blocks count in blocks downloading
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         =  1000;

const int      P2P_DEFAULT_PORT                              =  17897;
const int      RPC_DEFAULT_PORT                              =  17898;
const int      SERVICE_DEFAULT_PORT                          =  8979;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                =  1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 =  5000;

// P2P Network Configuration Section - This defines our current P2P network version
// and the minimum version for communication between nodes
const uint8_t  P2P_CURRENT_VERSION                           = 1;
const uint8_t  P2P_MINIMUM_VERSION                           = 0;

// This defines the minimum P2P version required for lite blocks propogation
const uint8_t P2P_LITE_BLOCKS_PROPOGATION_VERSION            = 0;

// This defines the number of versions ahead we must see peers before we start displaying
// warning messages that we need to upgrade our software.
const uint8_t  P2P_UPGRADE_WINDOW                            = 2;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 32 * 1024 * 1024; // 32 MB
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 24;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;            // seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;      // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;          // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;          // 2 seconds
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000; // 2 minutes
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;          // 5 seconds
const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "";

const uint64_t DATABASE_WRITE_BUFFER_MB_DEFAULT_SIZE         = 512;
const uint64_t DATABASE_READ_BUFFER_MB_DEFAULT_SIZE          = 32;
const uint32_t DATABASE_DEFAULT_MAX_OPEN_FILES               = 100;
const uint16_t DATABASE_DEFAULT_BACKGROUND_THREADS_COUNT     = 2;

const char     LATEST_VERSION_URL[]                          = "https://github.com/pengolincoin/pengolincoin/releases/latest";
const std::string LICENSE_URL                                = "https://github.com/pengolincoin/pengolincoin/blob/master/LICENSE";
const static   boost::uuids::uuid CRYPTONOTE_NETWORK         =
{
    {  0x07, 0x07, 0x07, 0x17, 0x17, 0x75, 0x75, 0x78, 0x37, 0x77, 0x37, 0x76, 0x27, 0x77, 0x35, 0x27  }
};

const char* const SEED_NODES[] = {
	"78.46.222.91:17897", // vps
	"116.203.254.18:17897", // ft4a
    "116.203.178.152:17897" // clevery
};
} 
