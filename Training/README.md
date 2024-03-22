# WiproClassWork

This project consists of a set of instructions for setting up and building a project using `make` and managing directory structures.

## Installation

### Prerequisites
- `make`
- `tree` (optional, for viewing tree structure)

### Instructions
1. Install `make`:
    ```bash
    sudo apt install make
    ```

2. Create the directory for `obj`:
    ```bash
    mkdir obj
    ```

3. Install `tree` (optional, if not already installed):
    ```bash
    sudo apt install tree
    ```

## Usage

### Cleaning
To clean the directory/files:
```bash
make -f script/Makefile clean
```

To generate files
```bash
make -f script/Makefile
```

To run project
```bash
./bin/simpleCalc
```
