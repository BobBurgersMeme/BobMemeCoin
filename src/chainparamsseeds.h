#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the BobMemeCoin network.
 *
 * Each line contains a BIP155 serialized (networkID, addr, port) tuple.
 */
static const uint8_t chainparams_seed_main[] = {
    // 188.137.242.132:36661
    0x01,0x04,0xbc,0x89,0xf2,0x84,0x8f,0x35,
    // 185.224.132.28:36661
    0x01,0x04,0xb9,0xe0,0x84,0x1c,0x8f,0x35,
};

static const uint8_t chainparams_seed_test[] = {
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
