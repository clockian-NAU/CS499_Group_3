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

## Downloads

[Virtual Laser Application](https//:exampleDL.com/doNotClick)

## Developer Installation

1. Install Microsoft Speech Platform SDK
2. In Visual Studio, File > New > Project
3. Select “WPF Application”
4. In “Solution Explorer”, right-click “References”, then click “Add Reference”
5. In “Assemblies > Framework”, add “System.Windows.Forms”
6. In “Assemblies > Extensions”, locate and add “Microsoft.Kinect”
7. In “Browse”, click “Browse..” and find the “Microsoft.Speech.dll”. For me, it’s located in
“C:\Windows\assembly\GAC_MSIL\Microsoft.Speech\11.0.0.0__31bf3856ad364e35”
8. Copy and Paste the “MainWindow.xaml” and “MainWindow.xaml.cs” code into their
respective files
9. The project should now build and run correctly without errors

## Developer Guidelines

NULL ATM

## Documentation

SEE WIKI or link

## FAQ
> Note: This document primarily talks about the Kinect 360 open source project itself, not e.g. features of our product.
### What is "Open Source" software?
Generally, Open Source software is software that can be freely accessed, used, changed, and shared (in modified or unmodified form) by anyone. Open source software is made by many people, and distributed under licenses that comply with the Open Source Definition.
The internationally recognized Open Source Definition provides ten criteria that must be met for any software license, and the software distributed under that license, to be labeled "Open Source software." Only software licensed under an OSI-approved Open Source license should be labeled "Open Source" software.

### What license is Sourcegraph under?

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
