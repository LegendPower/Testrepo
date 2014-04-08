/*Definitions used throughout software*/
int Mode();                                     //Mode Module. Returns 1 if executed successfully.
int getMode();                                  //Mode visibility for other modules
#define         Mode_Manual             1       //Manual mode
#define         Mode_Auto               2       //Auto mode
#define         Mode_Locked             0       //Locked/Emergency mode
#define         Mode_Auto_MnV           21      //Auto sub-mode MnV

struct varModeMnVData{                          //MnV Additional data visibility for other modules 
  volatile int MnVCycle;                        //Current point in the MnV Cycle (High/Low 1/0)
  volatile int MnVFullCyleCounter;              //How many full high and low cycles have been completed
} varModeMnVDataCurrent;


int User();                                     //User Module. Returns 1 if executed successfully.
struct varUserInput{                            //User input data.
  volatile int UserMode;                        
  volatile int TapUp;
  volatile int TapDown;
  volatile int NoUse;
} varUserInputParsed, varUserInputRaw;                         

