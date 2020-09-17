# ue4_simple_cube_and_mvmnt
## Developed with macOS in mind
## 0.0 https://docs.unrealengine.com/en-US/Programming/QuickStart/index.html

# Setup
- Install Git-LFS (https://git-lfs.github.com)
- Not needed but _highly_ reccomended, `defaults write com.apple.dt.Xcode IDEIndexDisable 1`, this disables indexing in Xcode, which is not needed and is a heavy process
- Install Epic Games Launcher
  - Install UE from Epic Games Launcher
  - This installs all the build tools
- UE consists of a Project Explorer + Pseudo-IDE/World Editor
- When creating a new project, UE must be launched from within Epic Games Launcher to access the new project wizard
  - When a new project is created, Xcode is launched, at this point both the IDE/World Editor and Xcode are open
    - You can close the World Editor, building the project in Xcode will re-open the World Editor
    - Can easily create new classes from World Editor -- File > Create New C++ Class > Follow Wizard
      - This is helpful becuase majority of boilerplate is written for you, could also manually create the class, but I prefer to have the World editor do it for me
     - You can close Xcode and re-compile directly in World Editor, chefs choice on this
- Edit code in your favorite editor (some editor will complain about include-paths, I use VSCode and it does, haven't looked for a solution yet, I rely on the compiler failing for these errors)

# What it does
This project creates a cube that rotates and bobbs up and down
