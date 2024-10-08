# Onboarding-Task

A simple task to introduce the processes used in the Embedded subsection

## Introduction

To begin, you will need to download the following software:

- [Visual Studio Code](https://code.visualstudio.com/Download)
- [C/C++ Extension](https://code.visualstudio.com/docs/languages/cpp)
- [PlatformIO](https://platformio.org/install/ide?install=vscode)

If you don't already have it, download [Git](https://git-scm.com/downloads) as well

## Repository Setup

Once you've installed the required software, proceed with setting up the sample repo:

1. Open a terminal and clone the repository:

```bash
git clone https://github.com/GryphonRacingFSAE/Onboarding-Task.git
```

2. Enter the repo directory:

```bash
cd Onboarding-Task
```

3. Create a new branch and switch to it:

```bash
git checkout -b YourName  # NOTE: please name the branch accordingly
```

4. Open the repo folder in Visual Studio Code
5. Ensure the correct branch is selected in the bottom-left (e.g. YourName)
6. Select the PlatformIO icon from the left toolbar and wait for the project to initialize

## Task Instructions

You will be creating a simple morse code program using the ESP32's built-in LED:

- The built-in LED can be enabled through GPIO 2 &rarr; `pinMode(2, OUTPUT);`
- The LED can be turned on/off by setting the pin's voltage (HIGH/LOW) &rarr; `digitalWrite(2, HIGH);`
- The default program delay is based on milliseconds (1000ms = 1s) &rarr; `delay(1000);`

### Program Parameters

1. The task will be to spell the word **MISSISSIPPI**
2. The morse code system should work on the basis of a default time unit (300ms)
3. The following time unit multiples should be used for each feature:

| Feature                   | Time (units) |
| ------------------------- | ------------ |
| Dot                       | 1            |
| Dash                      | 3            |
| Space between dots/dashes | 1            |
| Space between letters     | 3            |
| Space between words       | 7            |

#### Notes:

- The chosen word includes a variety of repeating letters, which should encourage functional programming
- Since there is only one word, please use a length of 7 time units at the end of the word and have it loop

## Submission Instructions

Once your code is working, **record a video** or perform an **in-person demo**, then:

1. Stage your changes:

```bash
git add .
```

2. Commit your changes:

```bash
git commit -m "Add morse code implementation"  # NOTE: please name the commit accordingly
```

3. Push your changes:

```bash
git push origin YourName
```

4. Create a pull request for your branch [here](https://github.com/GryphonRacingFSAE/Onboarding-Task/pulls)
