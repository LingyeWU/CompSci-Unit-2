Martian Decoder
===========================

A communication tool for earth, Moon, and Mars.

Contents
-----
  1. [Planning](#planning)
  1. [Design](#design)
  1. [Development](#development)
  1. [Evalution](#evaluation)

Planning
----------

**Defining the problem (Tpoic 1.1.1)** 

The year 2015 is a year when interplanet traveling and planet expolration stepped onto a new stage. However, communication between different planets is still precautious and undeveloped. The station in the Earth can only communicate using Morse code, the station in the Moon can only communicate in Binary code. Communication with the station in Mars must be provided. 

Our client, the government of LWK on planet Earth(the most prosperous country in the year of 2050), is looking for a interplanet version of google translate, which includes basic functionality of being able to translate between Morse code, Binary, and Decimal messages from Mars, Earth, and Moon. In the case especially, our client is seeking for a program that provides a communication system that allows stations to communicate seamlessly using English. Also, limited the keyboard input on each planet's station to 2 push buttons where only 100w lights and buzzers are available. (see success criteria)

Therefore, the Martian Decoder is developed.

**Solution proposed**

In order to meet our clients' expectations and requirements, I decided to create this Martian Decoder based on the simpliest elements such as LED lights and buzzers aid by the Aruduino tool kit, where I code in the language of Modern C, with special requirements in Aruduino. Each step of development is demonstrated via the online platform Tinkercad. With the help of these tools, the program will be able to decode and translate the communication between Earth and Mars using Morse code, and the communication between Mars and the Moon using Binary code. All process and code of development are stored in Github.

- WHY Github

All scripts and documentation are stored in Github, making it easy to contribute to this open source projects, provide a clear documentation for the users, and showcase the project to our clients.

- WHY Tinkercad

Because Tinkercad is a free, online 3D modeling program that runs in a web browser, known for its simple interface and ease of use. Therefore making the simulation of each of our procedure extremely easy.

- WHY Arduino

An Arduino board is a one type of microcontroller based kit. Advantages of using Arduino include:
1. The software of the Arduino is well-suited with all kinds of in operation systems like Linux, Windows, and Macintosh, etc.
1. It also comes with open supply software system feature that permits tough software system developers to use the Arduino code to merge with the prevailing programing language libraries and may be extended and changed.
1. We are learning how to construct and code basic curcuits, where Arudino is a perfect toolkit for that learning purpose.
1. Comparing BASH to C

--- | BASH | C
--- | --- | ---
PROS | 1. Easy to learn and don't need ";" 2. already installed; 3. powerful with administrative tasks; 4. handy IT admin  | 1. Editing tools(IDE); 2. "Window"; 3. Users can develope their own electronic kit; 4. extremely powerful; simple syntax.
CONS | 1. syntax is unforgiving; 2. limited to terminal; 3. not a lot of resources on internet | 1. usage of additional programs to check your scripts; 2. too many unnecessary syntax

**Success criteria**

Expected measureable outcomes by the client includes:
1. Communication between Earth and Mars uses Morse code.
1. Communication between Mars and the Moon uses Binary code.
1. Provide a communication system that allow stations to communicate seamlessly using English.
1. Keyboard input on each station is limited to 2 push buttons. 
1. 100W lights are buzzers are available.
1. The program should has a high accuracy and speed in translating.
1. The program should be able to separate each language from each other.

Design
----------

Development
----------
Nov.6th

### 1. Consider the case of a challenged person who cannot operate a keyboard or a mouse. 
What options could we provide to allow this person interact with the computer?
![Diagram](2 button challenge.jpg)

### 2. 





Evaluation
----------
