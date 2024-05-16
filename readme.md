# Smart Particles Sandbox

Welcome to the Smart Particles Sandbox! This C++ project lets you explore particle dynamics in a customizable sandbox environment. With modern OpenGL techniques and Lua scripting via Sol2, you can simulate and visualize particle behavior in real time.

## Features

- **Real-time Particle Simulation**: Interact with thousands of particles using modern OpenGL.
- **Immediate Mode GUI**: Enjoy a smooth, responsive user interface powered by ImGui.
- **Script Customization**: Customize particle properties and behavior with Lua scripts.
- **Cross-platform**: Runs on Windows, macOS, and Linux.  (Primarily tested on Windows with Visual Studio)
- Efficient physics using Spatial Hashing ([paper](Refrences/Optimization-of-large-scale-real-time-simulations.pdf))
- ECS design pattern using entt library

## Building the Project

If you have cmake installed and configured in your system you can skipt to `step 2`.

### Step 1: Install CMake

To install CMake, follow these steps:

1. Visit the CMake official website at [CMake Downloads](https://cmake.org/download/).
2. Follow the installation instructions for your platform.

### Step 2: Add CMake to the System PATH

To ensure that you can call `cmake` from the command line, you need to add it to your system `PATH`.
Alternatively, you can execute the `add-cmake-to-path.ps1` script in PowerShell with administrative privileges.

### Step 3: Generate solution and build

Run cmake-generate-solution.ps1 to generate a solution. Open it to compile the project on your desired configuration. You can also execute cmake-build.ps1 to build it automatically after generating the solution.


## Contribution

Thanks for exploring the Smart Particles Sandbox! For questions, support, or contributions, please open an issue on the GitHub repository. Feel free to contribute via merge requests or in any other way.