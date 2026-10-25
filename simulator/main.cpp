#include <iostream>
#include "SensorData.hpp"
#include "Simulator.hpp"
using namespace std;
int main(){
    cout<<"====SMART DEVICE MONITOR===="<<endl;
    cout<<"System initialization..."<<endl;
    cout<<"System ready"<<endl;
    SensorData sensor1;
    sensor1.deviceID ="SENSOR_001" ;
    sensor1.temperature =25;
    runSimulation(sensor1,10);
    return 0;
}