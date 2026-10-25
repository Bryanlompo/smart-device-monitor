#include <cassert>
#include <iostream>
#include <string_view>
#include "monitor/SensorReading.hpp"

int main() {
    using monitor::DeviceStatus;
    using monitor::evaluate_temperature;
    assert(evaluate_temperature(20.0) == DeviceStatus::Normal);
    assert(evaluate_temperature(35.0) == DeviceStatus::Normal);
    assert(evaluate_temperature(35.1) == DeviceStatus::Warning);
    assert(evaluate_temperature(-5.0) == DeviceStatus::Normal);
    assert(std::string_view(monitor::status_text(DeviceStatus::Warning)) == "WARNING");
    std::cout << "Monitoring tests passed\n";
    return 0;
}
