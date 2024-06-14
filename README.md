# MVN Live Link for Unreal Engine 5.4.2

This repository contains the compiled MVN Live Link plugin for Unreal Engine 5.4.2. The original plugin creator, Xsens (Movella), has not yet provided a version compatible with Unreal Engine 5.4.2, so this compilation aims to fill that gap.

## Overview

MVN Live Link is a plugin that allows for seamless integration of motion capture data from Xsens MVN into Unreal Engine. This facilitates real-time motion capture streaming and character animation within Unreal Engine projects.

## Changes Made

The only breaking change encountered during the update to Unreal Engine 5.4.2 was related to logging functionality in the `LiveLinkMvnRetargetAsset.cpp` file. The original code used:

```cpp
#define MYLOG(a, ...) if (m_doLog) UE_LOG(LogTemp, Warning, TEXT(a), __VA_ARGS__)
```

This was replaced with:

```cpp
#define MYLOG(a, ...) if (m_doLog) UE_LOG(LogTemp, Warning, TEXT("%s"), *FString::Printf(TEXT(a), ##__VA_ARGS__))
```

This change ensures compatibility with the updated logging system in Unreal Engine 5.4.2.

## Installation

## Installing the MVN Live Link Plugin for Unreal Engine 5.4.2

##### 1. Download the Latest Release
- Go to the Releases page and download the latest version of the plugin.

##### 2. Copy the Plugin to Your Unreal Engine Project
- Navigate to your Unreal Engine project's directory.
- Create a `Plugins` folder if it does not exist.
- Extract the downloaded plugin into the `Plugins` folder of your project.

##### 3. Enable the Plugin
- Open your Unreal Engine project.
- Go to `Edit -> Plugins`.
- Find the MVN Live Link plugin in the list and enable it.
- Restart the Unreal Engine editor if prompted.


## Usage

Once the plugin is installed and enabled, you can start using it to stream motion capture data from Xsens MVN into your Unreal Engine project. Refer to the official documentation for detailed usage instructions and best practices.

## Disclaimer

This plugin is experimental and provided "as-is." Use it at your own risk. The author is not responsible for any issues or damages that may arise from using this plugin. Always back up your project before integrating new plugins.

## Contributing

If you encounter any issues or have suggestions for improvements, feel free to open an issue or submit a pull request. Contributions are welcome!

## Acknowledgements

- Original plugin creator: Movella Technologies B.V.
- Unreal Engine by Epic Games
