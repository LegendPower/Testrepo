/*configuration header*/

#define REG *((volatile unsigned short *)0x1C02)
#define REGTEST2 *((volatile unsigned short *)0x1C00)
#define REG32BIT *((volatile unsigned long *)0x1C04)

void testfunc(){
  return;
}
