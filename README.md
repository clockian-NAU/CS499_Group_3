# Kinect Laser Controller
 
-----
## Mission Statement
The Kinect Laser Controller is an open source project that is developing a control scheme using a Kinect to move a dual stepper motor holding a laser.

This project will eventually support a variety of Kinect devices and dual stepper motors, with an easily adjustable and flexible setup, and productive error messages that help address any problems with the system.

----
## Features
* Kinect 360 application that 
  * Reads various gestures to control the Dual Stepper Motor
  * Saves 3 XY coordinates
  * Automatic function to auto move between the saved points
  * Voice control to perform all of the above functions 
* A virtual laser application to simulate a Dual Stepper Motor
* A program to control a Dual Step Motor with a Chipkit Micro Controller

----
## Development Status

### Summary
There is a lot of work that needs to be done all parts of the project. The Kinect 360, although is functional, has plenty of bugs that need to be resolved along with the C code for the Dual Stepper Motor.

### Near term goals
* Remake the virtual laser application from scratch to remove dependency on AHK
* Add threading to the Kinect 360 application to remove occasional stuttering in the program
* Adjust Dual Step Motor C code to be more flexible to different setups and give useful errors
* Tests for all applications
* Turn the three programs into a single executable program
* Setup a continuous integration build system
----
## Materials and Software
* Xbox 360 Kinect
  * There are two variants of the v1.8 Kinect, one for the Xbox 360 and one for Windows
PCs. While the Windows Kinect has slightly more functionality than the Xbox 360 Kinect,
it is significantly more expensive
* USB/Power Adapter
  * Only the Windows Kinect can hook to the Computer with only a USB. The Xbox 360
Kinect has a weird combined male/female usb end that requires an adapter with a power
cord attached to work.
* [Microsoft Visual Studio Community 2017](https://www.visualstudio.com/vs/community/)
  * Expect the installation
time to take an hour and 4 gigs of bandwidth
* [Kinect SDK v1.8](https://www.microsoft.com/en-us/download/details.aspx?id=40278)
  * The SDK v2.0 is only for for the Xbox One Kinect
* [AutoHotKey Software](http://ahkscript.org/)
  * Required for the program to push the buttons in the Stepper Motor Emulator.
* [Stepper Motor Emulator](https//:exampleDL.com/doNotClick)
  * Provide to our group by the instructor. You may want to consider reimplementing it to not
use AutoHotKey
----
## Developer Installation
1. Install Microsoft Visual Studio Community 2017
2. Install the Kinect SDK v1.8
3. Install AutoHotKey Software
4. Install Microsoft Speech Platform SDK
   * In Visual Studio, File > New > Project
   * Select “WPF Application”
   * In “Solution Explorer”, right-click “References”, then click “Add Reference”
   * In “Assemblies > Framework”, add “System.Windows.Forms”
   * In “Assemblies > Extensions”, locate and add “Microsoft.Kinect”
   * In “Browse”, click “Browse..” and find the “Microsoft.Speech.dll”. For me, it’s located in “C:\Windows\assembly\GAC_MSIL\Microsoft.Speech\11.0.0.0__31bf3856ad364e35”
   * Copy and Paste the “MainWindow.xaml” and “MainWindow.xaml.cs” code into their
respective files
5. Make slight corrections to the code so the video dots show
   * Open the Kinect-Project sln file
   * In “Solution Explorer”, locate “MainWindow.xaml” and open it
   * In the XAML panel, there are 5 lines of code beginning with <Image
   * Locate the 
   ```Source = “C:\Users\Image-Location\black-dot.png”``` and replace the address with the current address of the images
   * Repeat this for all five images
5. Run ControllerInterface.ahk
6. Run the StepperMotor-Emulator
7. Build and run the code by clicking the Start button in Visual Studio
----
## Developer Guidelines
1. Created functions needs a header summarizing the purpose of the function
2. Created functions need reasonable comments to describe what is going on
3. Created functions need an entry in the Google Doc, see a project manager for access
----
## Documentation
See the [Kinect Project Documentation Google Doc](https://drive.google.com/open?id=150lG4TWus_JX-NN4szMAJqqgdq6AKKtUK6rx6Dp6OOA) for the documentation

----
## FAQ
> Note: This faq primarily talks about the Kinect 360 open source project itself, not e.g. features of our product.
### What is "Open Source" software?
Generally, Open Source software is software that can be freely accessed, used, changed, and shared (in modified or unmodified form) by anyone. Open source software is made by many people, and distributed under licenses that comply with the Open Source Definition.
The internationally recognized Open Source Definition provides ten criteria that must be met for any software license, and the software distributed under that license, to be labeled "Open Source software." Only software licensed under an OSI-approved Open Source license should be labeled "Open Source" software.

### What license is Kinect Laser Controller under?

Kinect Laser Controller is under the [Apache License v2.0](../LICENSE).

### How to contribute?
If you are willing to contribute to the project you will find the relevant information in our developer wiki. We will help you and answer your questions in the the comment page. The fundamentals are:
1. Fork the project & clone locally.
2. Create an upstream remote and sync your local copy before you branch.
3. Branch for each separate piece of work.
4. Do the work, write good commit messages, and read the CONTRIBUTING file if there is one.
5. Push to your origin repository.
6. Create a new PR in GitHub.
7. Respond to any code review feedback.

Our team is thankful to all those who have pointed out bugs and submitted pull requests. we will need some time to review everything and we cannot guarantee that at this moment.

### Is all of our project open source?
This repository is 100% open source and builds a product known as Kinect Laser Controller.
