#include "Simulator.hpp"
#include <thread>
#include <chrono>
#include "SensorMonitor.hpp"
using namespace std;
void runSimulation(SensorData& sensor, int numberOfMeasurements){
    auto startTime = chrono:: steady_clock::now();
    for (int i=0; i< numberOfMeasurements;i++){
        auto currentTime= chrono::steady_clock::now();
        auto elapsed = chrono::duration_cast<chrono::milliseconds>(currentTime-startTime).count();
        sensor.uptime=elapsed;
        updateStatus(sensor);
        cout<<"Measurement"<<"#"<<i+1<<endl;
        displaySensorData(sensor);
        sensor.temperature += 2.5;
        if (i+1< numberOfMeasurements){
            this_thread::sleep_for(chrono::seconds(1));}
        }
}