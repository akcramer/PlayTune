#ifndef smb
#define smb
#include <stdint.h>
#include <avr/pgmspace.h>

#define PART0 256,p0_notes,p0_delays,sizeof(p0_notes)/sizeof(*(p0_notes)),sizeof(p0_delays)/sizeof(*(p0_delays))
#define PART1 256,p1_notes,p1_delays,sizeof(p1_notes)/sizeof(*(p1_notes)),sizeof(p1_delays)/sizeof(*(p1_delays))
#define PART2 1024,p2_notes,p2_delays,sizeof(p2_notes)/sizeof(*(p2_notes)),sizeof(p2_delays)/sizeof(*(p2_delays))
/*

    Part: 0
    Freq: 16000000
    Number of voices: 1
    Note length: 510
    Delay length: 510

    Part: 1
    Freq: 16000000
    Number of voices: 1
    Note length: 525
    Delay length: 525

    Part: 2
    Freq: 16000000
    Number of voices: 1
    Note length: 519
    Delay length: 519

*/
const uint8_t p0_notes[] PROGMEM = {
46,46,0,46,0,59,46,0,39,0,0,0,59,0,79,0,94,0,70,0,62,0,66,70,0,79,0,46,39,0,34,0,44,39,0,46,0,59,52,62,0,59,0,79,0,94,0,70,0,62,0,66,70,0,79,0,46,39,0,34,0,44,39,0,46,0,59,52,62,0,0,39,41,44,49,0,46,0,74,70,59,0,70,59,52,0,39,41,44,49,0,46,0,29,0,29,29,0,0,0,39,41,44,49,0,46,0,74,70,59,0,70,59,52,0,49,0,52,0,59,0,0,0,0,39,41,44,49,0,46,0,74,70,59,0,70,59,52,0,39,41,44,49,0,46,0,29,0,29,29,0,0,0,39,41,44,49,0,46,0,74,70,59,0,70,59,52,0,49,0,52,0,59,0,0,0,59,59,0,59,0,59,52,0,46,59,0,70,79,0,0,59,59,0,59,0,59,52,46,0,59,59,0,59,0,59,52,0,46,59,0,70,79,0,0,46,46,0,46,0,59,46,0,39,0,0,0,59,0,79,0,94,0,70,0,62,0,66,70,0,79,0,46,39,0,34,0,44,39,0,46,0,59,52,62,0,59,0,79,0,94,0,70,0,62,0,66,70,0,79,0,46,39,0,34,0,44,39,0,46,0,59,52,62,0,46,59,0,79,0,74,0,70,44,0,44,70,0,0,62,0,34,34,0,34,0,39,44,0,46,59,0,70,79,0,0,46,59,0,79,0,74,0,70,44,0,44,70,0,0,62,44,0,44,44,0,46,52,0,59,0,0,0,46,59,0,79,0,74,0,70,44,0,44,70,0,0,62,0,34,34,0,34,0,39,44,0,46,59,0,70,79,0,0,46,59,0,79,0,74,0,70,44,0,44,70,0,0,62,44,0,44,44,0,46,52,0,59,0,0,0,59,59,0,59,0,59,52,0,46,59,0,70,79,0,0,59,59,0,59,0,59,52,46,0,59,59,0,59,0,59,52,0,46,59,0,70,79,0,0,46,46,0,46,0,59,46,0,39,0,0,0,46,59,0,79,0,74,0,70,44,0,44,70,0,0,62,0,34,34,0,34,0,39,44,0,46,59,0,70,79,0,0,46,59,0,79,0,74,0,70,44,0,44,70,0,0,62,44,0,44,44,0,46,52,0,59,0,0,0
};
const uint8_t p0_delays[] PROGMEM = {
2,2,2,2,2,2,2,2,2,2,4,8,2,4,2,4,2,4,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,2,4,2,4,2,4,2,4,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,2,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,4,2,4,2,2,4,8,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,4,2,4,2,2,4,8,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,16,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,4,8,2,4,2,4,2,4,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,2,4,2,4,2,4,2,4,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,4,2,2,2,2,2,2,2,2,4,2,1,2,2,1,2,1,2,2,1,2,2,2,2,2,2,4,2,2,2,2,4,2,2,2,2,2,2,2,2,4,2,2,2,2,2,1,2,2,1,2,2,4,8,2,2,2,2,4,2,2,2,2,2,2,2,2,4,2,1,2,2,1,2,1,2,2,1,2,2,2,2,2,2,4,2,2,2,2,4,2,2,2,2,2,2,2,2,4,2,2,2,2,2,1,2,2,1,2,2,4,8,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,16,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,4,8,2,2,2,2,4,2,2,2,2,2,2,2,2,4,2,1,2,2,1,2,1,2,2,1,2,2,2,2,2,2,4,2,2,2,2,4,2,2,2,2,2,2,2,2,4,2,2,2,2,2,1,2,2,1,2,2,4,8
};

const uint8_t p1_notes[] PROGMEM = {
83,83,0,83,0,83,83,0,62,0,0,79,0,0,94,0,118,0,158,0,118,0,105,0,112,118,0,118,0,79,62,0,59,0,70,62,0,70,0,94,88,105,0,94,0,118,0,158,0,118,0,105,0,112,118,0,118,0,79,62,0,59,0,70,62,0,70,0,94,88,105,0,0,46,49,52,62,0,59,0,94,88,79,0,118,94,88,0,46,49,52,62,0,59,0,44,0,44,44,0,0,0,46,49,52,62,0,59,0,94,88,79,0,118,94,88,0,74,0,88,0,94,0,0,0,0,46,49,52,62,0,59,0,94,88,79,0,118,94,88,0,46,49,52,62,0,59,0,44,0,44,44,0,0,0,46,49,52,62,0,59,0,94,88,79,0,118,94,88,0,74,0,88,0,94,0,0,0,74,74,0,74,0,74,66,0,79,94,0,94,118,0,0,74,74,0,74,0,74,66,79,0,74,74,0,74,0,74,66,0,79,94,0,94,118,0,0,83,83,0,83,0,83,83,0,62,0,0,79,0,0,94,0,118,0,158,0,118,0,105,0,112,118,0,118,0,79,62,0,59,0,70,62,0,70,0,94,88,105,0,94,0,118,0,158,0,118,0,105,0,112,118,0,118,0,79,62,0,59,0,70,62,0,70,0,94,88,105,0,59,70,0,94,0,94,0,88,59,0,59,88,0,0,79,0,44,44,0,44,0,46,52,0,59,70,0,88,94,0,0,59,70,0,94,0,94,0,88,59,0,59,88,0,0,79,52,0,52,52,0,59,62,0,79,94,0,94,118,0,0,59,70,0,94,0,94,0,88,59,0,59,88,0,0,79,0,44,44,0,44,0,46,52,0,59,70,0,88,94,0,0,59,70,0,94,0,94,0,88,59,0,59,88,0,0,79,52,0,52,52,0,59,62,0,79,94,0,94,118,0,0,74,74,0,74,0,74,66,0,79,94,0,94,118,0,0,74,74,0,74,0,74,66,79,0,74,74,0,74,0,74,66,0,79,94,0,94,118,0,0,83,83,0,83,0,83,83,0,62,0,0,79,0,0,59,70,0,94,0,94,0,88,59,0,59,88,0,0,79,0,44,44,0,44,0,46,52,0,59,70,0,88,94,0,0,59,70,0,94,0,94,0,88,59,0,59,88,0,0,79,52,0,52,52,0,59,62,0,79,94,0,94,118,0,0
};
const uint8_t p1_delays[] PROGMEM = {
2,2,2,2,2,2,2,2,2,2,4,2,2,4,2,4,2,4,2,4,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,2,4,2,4,2,4,2,4,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,2,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,4,2,4,2,2,4,8,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,4,2,4,2,2,4,8,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,16,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,4,2,2,4,2,4,2,4,2,4,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,2,4,2,4,2,4,2,4,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,4,2,2,2,2,2,2,2,2,4,2,1,2,2,1,2,1,2,2,1,2,2,2,2,2,2,4,2,2,2,2,4,2,2,2,2,2,2,2,2,4,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,4,2,2,2,2,4,2,2,2,2,2,2,2,2,4,2,1,2,2,1,2,1,2,2,1,2,2,2,2,2,2,4,2,2,2,2,4,2,2,2,2,2,2,2,2,4,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,16,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,4,2,2,4,2,2,2,2,4,2,2,2,2,2,2,2,2,4,2,1,2,2,1,2,1,2,2,1,2,2,2,2,2,2,4,2,2,2,2,4,2,2,2,2,2,2,2,2,4,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,4
};

const uint8_t p2_notes[] PROGMEM = {
52,52,0,52,0,52,52,0,19,0,0,39,0,0,39,0,46,0,59,0,44,0,39,0,41,44,0,46,0,29,23,0,21,0,26,23,0,29,0,34,31,39,0,39,0,46,0,59,0,44,0,39,0,41,44,0,46,0,29,23,0,21,0,26,23,0,29,0,34,31,39,0,59,0,39,0,29,0,44,0,29,29,0,44,0,59,0,46,0,39,29,0,9,0,9,9,0,39,0,59,0,39,0,29,0,44,0,29,29,0,44,0,59,0,37,0,33,0,29,0,39,39,0,59,0,59,0,39,0,29,0,44,0,29,29,0,44,0,59,0,46,0,39,29,0,9,0,9,9,0,39,0,59,0,39,0,29,0,44,0,29,29,0,44,0,59,0,37,0,33,0,29,0,39,39,0,59,0,74,0,49,0,37,0,39,0,59,0,79,0,74,0,49,0,37,0,39,0,59,0,79,0,74,0,49,0,37,0,39,0,59,0,79,0,52,52,0,52,0,52,52,0,19,0,0,39,0,0,39,0,46,0,59,0,44,0,39,0,41,44,0,46,0,29,23,0,21,0,26,23,0,29,0,34,31,39,0,39,0,46,0,59,0,44,0,39,0,41,44,0,46,0,29,23,0,21,0,26,23,0,29,0,34,31,39,0,59,0,41,39,0,29,0,44,0,44,0,29,29,44,0,52,0,44,39,0,31,0,39,0,39,0,29,29,39,0,59,0,41,39,0,29,0,44,0,44,0,29,29,44,0,39,39,0,39,39,0,34,31,0,29,0,39,0,59,0,0,59,0,41,39,0,29,0,44,0,44,0,29,29,44,0,52,0,44,39,0,31,0,39,0,39,0,29,29,39,0,59,0,41,39,0,29,0,44,0,44,0,29,29,44,0,39,39,0,39,39,0,34,31,0,29,0,39,0,59,0,0,74,0,49,0,37,0,39,0,59,0,79,0,74,0,49,0,37,0,39,0,59,0,79,0,74,0,49,0,37,0,39,0,59,0,79,0,52,52,0,52,0,52,52,0,19,0,0,39,0,0,59,0,41,39,0,29,0,44,0,44,0,29,29,44,0,52,0,44,39,0,31,0,39,0,39,0,29,29,39,0,59,0,41,39,0,29,0,44,0,44,0,29,29,44,0,39,39,0,39,39,0,34,31,0,29,0,39,0,59,0,0
};
const uint8_t p2_delays[] PROGMEM = {
2,2,2,2,2,2,2,2,2,2,4,2,2,4,2,4,2,4,2,4,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,2,4,2,4,2,4,2,4,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,2,4,2,4,2,4,2,2,2,4,2,2,2,2,2,2,4,2,4,2,2,2,2,2,2,2,2,2,2,2,4,2,4,2,2,2,4,2,2,2,2,2,2,2,2,4,2,4,2,4,2,2,2,2,2,2,4,2,4,2,2,2,4,2,2,2,2,2,2,4,2,4,2,2,2,2,2,2,2,2,2,2,2,4,2,4,2,2,2,4,2,2,2,2,2,2,2,2,4,2,4,2,4,2,2,2,2,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,4,2,4,2,4,2,4,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,2,4,2,4,2,4,2,4,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,2,4,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,4,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,4,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,4,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,2,4
};

#endif
