#include "SensorMonitor.hpp"
void updateStatus(SensorData& sensor){
     if (sensor.temperature>35){
            sensor.Status= "WARNING";
        }
    else {
        sensor.Status ="NORMAL";
    }

}
void displaySensorData(const SensorData& sensor){
    cout<<"Device ID: " <<sensor.deviceID <<endl;
    cout<<"temperature: " <<sensor.temperature<< " C" <<endl;
    cout<<"Uptime: " <<sensor.uptime <<endl;
    cout<<"Status: "<<sensor.Status<<endl;

}