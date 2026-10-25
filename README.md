# Smart Device Monitoring System

**Embedded C++ | ESP32-S3 | PC Simulation | Automated Testing**

A university-style embedded engineering project to monitor sensor readings, identify abnormal temperatures, and report telemetry. The software is developed in stages: first as a C++17 desktop simulator, then as ESP32-S3 firmware with real hardware.

> **Status (October 2026):** Initial desktop simulator and automated tests committed. ESP32-S3 hardware validation is pending. This is a learning and portfolio project, not a certified safety-monitoring system.

## Why build this?
Embedded monitoring is used in industrial equipment, environmental sensing, laboratory instruments, and preventive maintenance. This project demonstrates firmware design, separation of hardware-independent logic, telemetry, testing, and engineering documentation.

## Architecture

```text
              Measurement source
                /          \
       PC simulator     ESP32-S3 sensors (planned)
                \          /
             common/ monitoring logic
                       |
             Status + telemetry
                       |
         PC terminal / serial / logging (planned)
```

## Repository structure

| Path | Purpose |
| --- | --- |
| `common/include/monitor/` | Shared C++ data types and alert classification |
| `simulator/` | Desktop temperature simulator |
| `firmware/` | ESP32-S3 implementation (planned) |
| `tests/` | Automated tests |
| `docs/` | Project plan, requirements and engineering notes |
| `.github/workflows/` | Continuous integration |

## Build and test (CMake, C++17)

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
./build/device_simulator
```

The simulation prints ten readings one second apart, including uptime and a NORMAL/WARNING status. The threshold currently defaults to 35 °C and is a demonstration setting, not a hardware safety limit.

**No local environment?** Edit files in [github.dev](https://github.dev/Bryanlompo/smart-device-monitor) and use the **Actions** tab to see automated compilation and tests. The browser editor itself does not execute C++.

## Roadmap

- [x] Define the project structure and requirements
- [x] Create basic C++ desktop simulator
- [x] Add initial threshold unit tests and GitHub Actions workflow
- [ ] Refactor into a clean simulation source + monitoring application
- [ ] Add configuration and robust input validation
- [ ] Bring up ESP32-S3 serial telemetry
- [ ] Read a real sensor over I2C
- [ ] Implement structured logging, faults, and a final demonstration

## Project workflow
Each feature should have a GitHub Issue, an implementation commit, and an explicit test or validation note. See [Project Plan](docs/PROJECT_PLAN.md).

## Author
Bryan Lompo — Computer Engineering student, University of Ottawa.
