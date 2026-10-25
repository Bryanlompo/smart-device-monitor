#pragma once
#include <cstdint>
namespace monitor {
struct SensorReading { double temperature_c; std::uint64_t uptime_ms; };
enum class DeviceStatus { Normal, Warning };
inline DeviceStatus evaluate_temperature(double c, double threshold_c = 35.0) {
    return c > threshold_c ? DeviceStatus::Warning : DeviceStatus::Normal;
}
inline const char* status_text(DeviceStatus s) {
    return s == DeviceStatus::Warning ? "WARNING" : "NORMAL";
}
} // namespace monitor
