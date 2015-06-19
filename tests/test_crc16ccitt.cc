#include "CRC/CRC16CCITT.h"
#include "catch.hh"
#include "test_crc.h"

TEST_CASE("CRC16CCITT patch appending works", "[crc16]")
{
    test_appending(std::unique_ptr<CRC>(new CRC16CCITT), 0xdead);
}

TEST_CASE("CRC16CCITT computing", "[crc16]")
{
    test_computing(std::unique_ptr<CRC>(new CRC16CCITT), 0x2189);
}
