# Project Plan — Smart Device Monitoring System

## Purpose
Prototype a device-monitoring pipeline that detects abnormal readings and reports understandable telemetry. Industrial parallels include condition monitoring, laboratory instrumentation, and fault detection.

## Functional requirements
- FR-01: Generate timestamped readings in a desktop simulation.
- FR-02: Compare readings against a configurable threshold.
- FR-03: Display device ID, uptime, temperature, and status.
- FR-04: Add ESP32-S3 serial telemetry after hardware arrival.
- FR-05: Add repeatable tests for the monitoring logic.

## Development phases
1. PC simulation and unit tests.
2. ESP32-S3 basic serial output.
3. Real sensor integration and data validation.
4. Logging, fault handling, documentation and demonstration.

## Acceptance criteria for phase 1
- CMake builds under C++17.
- Simulation outputs ten records at one-second intervals.
- Test executable passes all initial threshold cases.
- CI runs build and tests on each push or pull request.

## Engineering journal
Record decisions, bugs, fixes, and evidence in Issues and subsequent documentation commits.
