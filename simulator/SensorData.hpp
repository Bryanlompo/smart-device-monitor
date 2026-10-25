#pragma once 
#include <string>
using namespace std;
struct SensorData{
    string deviceID;
    string Status;
    float temperature;
    unsigned long uptime;
};