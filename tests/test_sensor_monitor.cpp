#include <cassert>
#include "../simulator/SensorData.hpp"
#include "../simulator/SensorMonitor.hpp"
int main() {

    SensorData sensor;

    sensor.temperature = 20.0;

    updateStatus(sensor);

    assert(sensor.Status== "NORMAL");
    sensor.temperature = 35.0;
    updateStatus(sensor);
    assert(sensor.Status== "NORMAL");
    sensor.temperature = 35.1;
    updateStatus(sensor);
    assert(sensor.Status== "WARNING");
    sensor.temperature = 50.0;
    updateStatus(sensor);
    assert(sensor.Status== "WARNING");

    return 0;
}