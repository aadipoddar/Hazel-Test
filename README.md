# Hazel ![Hex.pm](https://img.shields.io/hexpm/l/plug?color=green&label=Hazel%20License&logo=Hazel%20License%20Logo&style=for-the-badge)

![Hazel](/Resources/Branding/Hazel_Logo_Text_Light_Square.png?raw=true "Hazel")

Hazel is primarily an early-stage interactive application and rendering engine for Windows.

## Getting Started
Visual Studio 2022 is recommended, Hazel is officially untested on other development environments whilst we focus on a Windows build.

<ins>**1. Downloading the repository:**</ins>

Start by cloning the repository with `git clone https://github.com/aadipoddar/Hazel`

<ins>**2. Configuring the dependencies:**</ins>

1. Run the [Setup.bat](https://github.com/aadipoddar/Hazel/blob/master/scripts/Setup.bat) file found in `scripts` folder. This will download the required prerequisites for the project if they are not present yet.
2. One prerequisite is the Vulkan SDK. If it is not installed, the script will execute the `VulkanSDK.exe` file, and will prompt the user to install the SDK.
3. After installation, run the [Setup.bat](https://github.com/aadipoddar/Hazel/blob/master/scripts/Setup.bat) file again. If the Vulkan SDK is installed properly, it will then download the Vulkan SDK Debug libraries. (This may take a longer amount of time)
4. After donwloading and unzipping the files, the [Win-GenProjects.bat](https://github.com/aadipoddar/Hazel/blob/master/scripts/Win-GenProjects.bat) script file will get executed automatically, which will then generate a Visual Studio solution file for user's usage.

If changes are made, or if you want to regenerate project files, rerun the [Win-GenProjects.bat](https://github.com/aadipoddar/Hazel/blob/master/scripts/Win-GenProjects.bat) script file found in `scripts` folder.

***

## The Plan
The plan for Hazel is two-fold: to create a powerful 3D engine.

### Main features to come:
- Fast 2D rendering (UI, particles, sprites, etc.)
- High-fidelity Physically-Based 3D rendering (this will be expanded later, 2D to come first)
- Support for Mac, Linux, Android and iOS
    - Native rendering API support (DirectX, Vulkan, Metal)
- Fully featured viewer and editor applications
- Fully scripted interaction and behavior
- Integrated 3rd party 2D and 3D physics engine
- Procedural terrain and world generation
- Artificial Intelligence
- Audio system
