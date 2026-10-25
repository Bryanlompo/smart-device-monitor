#include <chrono>
#include <cstdint>
#include <iostream>
#include <thread>
#include "monitor/SensorReading.hpp"

int main() {
    constexpr const char* device_id = "SENSOR_001";
    std::cout << "===== SMART DEVICE MONITOR: SIMULATION =====\n";
    for (std::uint64_t second = 1; second <= 10; ++second) {
        // Simulated readings; a physical sensor will replace this source.
        double temperature_c = 24.5 + static_cast<double>(second % 4) * 4.0;
        monitor::SensorReading reading{temperature_c, second * 1000};
        auto status = monitor::evaluate_temperature(reading.temperature_c);
        std::cout << "Device: " << device_id
                  << " | Uptime: " << reading.uptime_ms << " ms"
                  << " | Temperature: " << reading.temperature_c << " C"
                  << " | Status: " << monitor::status_text(status) << '\n';
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}
