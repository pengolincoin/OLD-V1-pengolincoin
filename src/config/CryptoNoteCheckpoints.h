// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2019, Car Dash Ian Coin Developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2018-2019, The DeroGold Assosiation
// Copyright (c) 2018-2019, The BitcoinMono Developers
// Copyright (c) 2020 The COVID-19 Developers
// Copyright (c) 2020, PengolinCoin Developers
// Please see the included LICENSE file for more information


#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
    {0, "fd5ffa143504e93bb6c80a502eb723b5ecea062a613e2d1c03e5ac427a2d68c9"},
    {100, "65b9606c7ecfab2c0846392874b12aa33a0eccaa319a1fe6eddd50703abdc716"},
    {500, "56c3bf5243bab26cc62c8ff57a77f7e31f5d8eab55c9ee069581a3c34d0e9fa2"},
    {1000, "69090926e7ed0c2b820f0dbcade76b90c7b61ef96ff7e7197c1f6acf7a47d105"},
    {2500, "b77b521548b05200c94034f0c55493f7ae37ffa83f808ebb52acd6597173a80c"},
    {4000, "9325abafe1201a052fd6112595c6ec214b1a64d3818e9bbb038cbc03ece11390"},
    {5000, "c706a4654b4df14bb54a2f57cc56f0fd64fc219c98a19aa46e25e0d39747406f"},
    {10000, "78ebc60e48386f9c6b003ab924b82936bebdf278955f29032f9b2ed53c1cf24b"},
    {20000, "131f38c59ad75512137b762a0bc9a910c7d3c5954484b34dd4cc4136524cf788"},
    {30000, "df3eb469b46a4bb3ca8e30270f53203a8a63339c26d3dc0fe4a7176eeab1059c"},
    {40000, "680856f3cbf6418433d97436d548bdbcf578ff05402a0840fde20402abc43385"},
    {50000, "a18edc4eff1a583bc032cc62055e5e6c625d9f999b7cdb2bf580309661219721"},
    {60000, "f095bd3a8d982ad133906709cc2423da617840bb244c87f4099da141fa908abe"},
    {70000, "cdc748d62c18f2c896e6b9746ec2a2abfc049c37353505d59c03a0f3d9c0b19b"},
    {80000, "3ea7717eba5fcae27fea63b9231c978220d2191e41b07449a515a692a8f5e4fb"},
    {90000, "d5eb0ccbdd3c8ee7bc89df2fbe80a60c94600534d3ad6a827f4f703966fc571b"},
	{100000, "58ed6f5497567e58654676d98ff066ef8e185888893ba1e5c304d84b8e7877d8"},
    {110000, "2e4cd950c354a377e63140c61dd3b928f0cb81d6f2af7956050c19b5e82b49af"}
};
} // namespace CryptoNote
