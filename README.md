# Cyclone Classification Tool (Python, C++)

Command-line tool that classifies a wind speed on:
- Hurricane (Saffir-Simpson style) scale
- Typhoon scale

It accepts wind speed input in either mph or km/h, converts units, and reports categories on both scales.

## Repository Status

This project currently contains two CLI implementations:
- `cyclone_Perez_Edgar.py`
- `cyclone_Perez_Edgar.cpp`

There is no database, backend service, or frontend UI in this repository.

## Requirements

- Python 3.8+
- C++ compiler with C++17 support (e.g., `g++`)

## Quick Start

### Python

```bash
python3 cyclone_Perez_Edgar.py
```

### C++

```bash
g++ -std=c++17 -Wall -Wextra -pedantic cyclone_Perez_Edgar.cpp -o cyclone_cpp
./cyclone_cpp
```

## Verification Commands

Use these non-interactive checks to verify behavior quickly:

```bash
printf "m\n100\n" | python3 cyclone_Perez_Edgar.py
printf "k\n200\n" | ./cyclone_cpp
```

Expected outcomes include:
- Unit conversion output in both mph and km/h
- Hurricane classification
- Typhoon classification

## Sample Demo Flow (5-10 Minutes)

1. Show project structure and explain dual-language implementation.
2. Run Python version with mph input.
3. Run C++ version with km/h input.
4. Show cross-scale classification logic (hurricane + typhoon).
5. Show invalid input handling (enter non-numeric speed).
6. Close with design tradeoffs and possible enhancements.

## Design Notes

- Single-file implementation in each language for learning clarity
- Shared conversion constant: `1 km/h = 0.621371 mph`
- Threshold-based classification rules for both scales
- Basic input validation to avoid crashes on non-numeric input

## Potential Enhancements

- Extract shared classification logic into reusable functions/classes
- Add automated tests (boundary-value test cases)
- Add support for batch classification from CSV
- Add a simple web UI wrapper for demonstration
