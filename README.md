# openGl-Engine

A simple 2D graphics and animation engine built from scratch in C using modern OpenGL. The primary goal of this project is to learn the fundamentals of computer graphics by implementing a program that can create simple shapes, define keyframe-based animations for them, and play them back.

## Current Status

The project is in the initial setup phase. The current version can successfully:
*   Initialize a window using GLFW.
*   Load modern OpenGL functions using GLAD.
*   Establish a basic render loop.
*   Be compiled and built using a CMake build system.

## Planned Features

The following features are planned for implementation:

*   **Shape Rendering:**
    *   Draw basic 2D primitives: triangles, rectangles, circles, and lines.
    *   Support for properties like position, size, rotation, and color.
*   **Animation System:**
    *   A keyframe-based animation system.
    *   Define animations by setting shape properties at specific timestamps.
    *   Linear interpolation for smooth transitions between keyframes (position, color, etc.).
*   **Playback Control:**
    *   Start and stop animation playback (e.g., using keyboard input).
    *   Looping and single-play animations.
*   **Persistence:**
    *   Save shape and animation data to a `JSON` file.
    *   Load animation data from a `JSON` file to be played back.
*   **User Interface:**
    *   Initially, a simple console command structure for defining shapes and animations.
    *   (Future Goal) A minimal GUI to allow for drawing shapes directly.

## Dependencies

To build and run this project, you will need the following installed on your system:

*   A C compiler (e.g., GCC or Clang)
*   `CMake` (version 3.10 or higher)
*   `GLFW`

The following libraries are included directly in the `lib/` directory and do not need to be installed separately:
*   `GLAD` (OpenGL Loader)
*   `cJSON` (for parsing JSON files)
*   `linmath.h` (for vector and matrix math)

## Building and Running (Arch Linux)

1.  **Install Dependencies:**
    Open a terminal and install the necessary packages.
    ```bash
    sudo pacman -Syu base-devel cmake glfw
    ```

2.  **Clone the Repository:**
    (If you have it on Git)
    ```bash
    git clone <your-repository-url>
    cd c-animation-engine
    ```

3.  **Create Build Directory:**
    It's standard practice to build the project in a separate directory.
    ```bash
    mkdir build
    cd build
    ```

4.  **Run CMake and Compile:**
    CMake will generate the Makefiles, and `make` will compile the source code.
    ```bash
    cmake ..
    make
    ```

5.  **Run the Application:**
    The executable will be created in the `build` directory.
    ```bash
    ./AnimationEngine
    ```

## Project Structure
gengine/
|
├── build/ # Compiled output (ignored by Git)
├── include/ # Project header files (.h)
├── lib/ # Third-party library source code
├── res/ # Resources (e.g., shaders, animation files)
├── src/ # C source files (.c)
├── .gitignore # Files and directories for Git to ignore
├── CMakeLists.txt # The CMake build script
└── README.md # This file
