/*    VISORBEARER KEY MATRIX / LAYOUT MAPPING

      ╭──────────────────┬──────────────────╮
      │   0   1   2   3  │   4   5   6   7  │
  ╭───╯   9  10  11  12  │  13  14  15  16  ╰───╮
  │   8  18  19  20      │      21  22  23  17  │
  ╰───────────╮  24  25  │  26  27  ╭───────────╯
              ╰──────────┴──────────╯

      ╭──────────────────┬──────────────────╮
      │ LT3 LT2 LT1 LT0  │  RT0 RT1 RT2 RT3 │
  ╭───╯ LM3 LM2 LM1 LM0  │  RM0 RM1 RM2 RM3 ╰───╮
  │ LM4 LB3 LB2 LB1      │      RB1 RB2 RB3 RM4 │
  ╰───────────╮ LH1 LH0  │  RH0 RH1 ╭───────────╯
              ╰──────────┴──────────╯
*/

#pragma once

#define LT0  4  // left-top row
#define LT1  3
#define LT2  2
#define LT3  1

#define RT0  5  // right-top row
#define RT1  6
#define RT2  7
#define RT3  8

#define LM0 14  // left-middle row
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10

#define RM0 15  // right-middle row
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

#define LB1 23  // left-bottom row
#define LB2 22
#define LB3 21

#define RB1 24  // right-bottom row
#define RB2 25
#define RB3 26

#define LH0 29  // left thumb keys
#define LH1 28

#define RH0 30  // right thumb keys
#define RH1 31
