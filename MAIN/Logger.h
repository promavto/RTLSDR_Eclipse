#pragma once
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <Arduino.h>
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class LoggerClass
{
  public:

    LoggerClass();

    void writeLine(const String& line);

  private:


};
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
extern LoggerClass Logger;
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------