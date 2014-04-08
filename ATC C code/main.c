
#include "io430.h"
#include "ConfHeader.h"
#include "SoftwareDefinitions.h"

void main( void ){
  
  return;
}


/*--------------------------------------------------------------------------------------------*/
/*MODE MODULE---------------------------------------------------------------------------------*/
int Mode(){
  /*Variables*/
  int NewMode;
  /*Function prototypes specific to the mode module*/
  int Mode_ChangeMode(int NewMode);
  int Mode_getNewMode();
  
  NewMode = Mode_getNewMode();
  if (NewMode != 1000){
    Mode_ChangeMode(NewMode);
  }
  else {
    //Set additional error flag to indicate where problem occured.
    return 0;
  }
  if (getMode() == Mode_Manual){
    return 1;
  }
  else if (getMode() == Mode_Auto){
    return 1;
  }
  else if (getMode() == Mode_Locked){
    return 1;
  }
  
  return 1;
}

int Mode_ChangeMode(int NewMode){
  /*ChangeMode is an internal function that changes the system mode to NewMode. Returns 1 if
  successfully completed.*/
  return 0;
}

int getNewMode(){
  /*Filter user mode for additional illegal input protection*/
  if (varUserInputParsed.UserMode == 0){
    return varUserInputParsed.UserMode;
  }
  else if (varUserInputParsed.UserMode == 1){
    return varUserInputParsed.UserMode;
  }
  else{
    return 1000;
  }
}
int getMode(){
  /*getMode provides a way for other modules to access the current system mode. Returns the
  current system mode.*/
  return 0;
}

/*--------------------------------------------------------------------------------------------*/
/*MFE MODULE----------------------------------------------------------------------------------*/





/*--------------------------------------------------------------------------------------------*/
/*USER/DISPLAY MODULE-------------------------------------------------------------------------*/

